int a, b ; 
int res = RS1 + RS2;

if(res>=127){
  res=127 ;
}else if (res <=-127){
  res =-127;
}

WRITE_RD(sext_xlen(res));