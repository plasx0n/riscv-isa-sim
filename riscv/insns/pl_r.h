int8_t a = RS1 ; 
int8_t b = RS2 ; 

int8_t res1,res2,res3,res4 ;

int8_t  a1,a2,a3,a4;
int8_t  b1,b2,b3,b4; 
int8_t  c1,c2,c3,c4; 

a1 = (a<<24)>>24;
a2 = (a<<16)>>24;
a3 = (a<<8 )>>24;
a4 = (a    )>>24;

b1 = (b<<24)>>24;
b2 = (b<<16)>>24;
b3 = (b<<8 )>>24;
b4 = (b    )>>24;

///////////////////
// better avec ternaire 

if(b1==1){
  res1 = 0 ;
}else{
  if(a1 < 0){
    res1 = 1 ; 
  }else {
    res1 = 0 ; 
  }
}
///////////////////

if(b1==1){
  res2 = 0 ;
}else{
  if(a2 < 0){
    res2 = 1 ; 
  }else {
    res2 = 0 ; 
  }
}
///////////////////
if(b1==1){
  res3 = 0 ;
}else{
  if(a3 < 0){
    res3 = 1 ; 
  }else {
    res3 = 0 ; 
  }
}
///////////////////

if(b1==1){
  res4 = 0 ;
}else{
  if(a4 < 0){
    res4 = 1 ; 
  }else {
    res4 = 0 ; 
  }
}
int ret = (res1 & 0xFF) | ((res2<<8)&0xFF00)  | ((res3<<16)&0xFF0000) | ((res4<<24)&0xFF000000);

WRITE_RD(ret);