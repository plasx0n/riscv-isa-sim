int8_t res = RS1 + RS2;

if(res>=127){
  res=127 ;
}else if(res <=-127){
  res =-127;
}

WRITE_RD(res);