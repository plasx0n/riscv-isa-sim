int8_t res ;
int8_t min1 , min2 ; 
int8_t sign = 0 ; 

int8_t a = RS1 ;
int8_t b = RS2 ; 

min1 = abs(a) ; 
min2 = abs(b) ; 

if(min1>min2)
  min1=min2 ; 

sign = (a < 0) ^ (b < 0) ; 

res =  (sign == 0 )? min1 : -min1 ; 

WRITE_RD(res);