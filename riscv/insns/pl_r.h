
int8_t a = RS1 ; 
int8_t b = RS2 ; 
int8_t res ; 

if(b==1){
  res = 0 ;
}else{
  if(a < 0){
    res = 1 ; 
  }else {
    res = 0 ; 
  }
}
    
WRITE_RD(res);