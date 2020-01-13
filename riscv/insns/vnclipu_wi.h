// vnclipu: vd[i] = clip(round(vs2[i] + rnd) >> simm)
VRM xrm = P.VU.get_vround_mode();
uint64_t int_max = ~(-1ll << P.VU.vsew);
VI_VVXI_LOOP_NARROW
({
  uint128_t result = vs2_u;
  unsigned shift = zimm5 & ((sew * 2) - 1);

  // rounding
  INT_ROUNDING(result, xrm, shift);

  // unsigned shifting to rs1
  result = result >> shift;

  // saturation
  if (result & (uint64_t)(-1ll << sew)) {
    result = int_max;
    P.VU.vxsat = 1;
  }

  vd = result;
}, false)
