
int a   = RS1 ; 
int b   = RS2 ; 

int res; 
int16_t r1,r2 ; 
int16_t a1,a2 ; 
int8_t b1,b2 ; 


a1 = (a<<16 )>>16 ; 
a2 = (a     )>>16 ; 

b1 = (b<<24)>>24;
b2 = (b<<16)>>24;

r1 = a1+b1 ; 
r2 = a2+b2 ;

// res =  (r1 & 0xFFFF) | ((r2<<16)&0xFFFF0000)
res = (r1 & 0xFFFF) |( (r2<<16)&0xFFFF0000 );  

WRITE_RD(res) ; 