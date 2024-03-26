#define SATVAL (127)
// //Saturate X at +/-SATVAL
#define SAT(x) ( ((x) > SATVAL) ? SATVAL : ( (x) < -SATVAL) ? (-SATVAL) : (x) ) 

int a = RS1;
int b = RS2; 

int res = 0 ; 

int8_t  a1,a2,a3,a4;
int8_t  b1,b2,b3,b4; 
int16_t c1,c2,c3,c4;
int8_t  d1=0,d2=0,d3=0,d4=0;

a1 = (a<<24)>>24;
a2 = (a<<16)>>24;
a3 = (a<<8 )>>24;
a4 = (a    )>>24;

b1 = (b<<24)>>24;
b2 = (b<<16)>>24;
b3 = (b<<8 )>>24;
b4 = (b    )>>24;

c1 = a1+b1; 
c2 = a2+b2; 
c3 = a3+b3; 
c4 = a4+b4;

d1 = SAT(c1); 
d2 = SAT(c2); 
d3 = SAT(c3); 
d4 = SAT(c4);

// attention à la propagation du signe => maskage
res = (d1 & 0xFF) | ((d2<<8)&0xFF00)  | ((d3<<16)&0xFF0000) | ((d4<<24)&0xFF000000); 


WRITE_RD(res); 