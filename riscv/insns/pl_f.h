int8_t res1,res2,res3,res4 ;

int8_t min11 , min21 ;
int8_t min12 , min22 ;
int8_t min13 , min23 ;
int8_t min14 , min24 ;

int8_t sign1 = 0, sign2 = 0 ,sign3 = 0 ,sign4 = 0 ; 

int a   = RS1;
int b   = RS2; 
int res = 0 ; 

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

// /////////////////
min11 = abs(a1) ; 
min21 = abs(b1) ; 

if(min11>min21)
  min11=min21 ; 

sign1 = (a1 < 0) ^ (b1 < 0) ; 
res1 =  (sign1 == 0 )? min11 : -min11 ; 

///////////////////
min12 = abs(a2) ; 
min22 = abs(b2) ; 

if(min12>min22)
  min12=min22 ; 

sign2 = (a2 < 0) ^ (b2 < 0) ; 
res2 =  (sign2 == 0 )? min12 : -min12 ; 
// /////////////////
min13 = abs(a3) ; 
min23 = abs(b3) ; 

if(min13>min23)
  min13=min23 ; 

sign3 = (a3 < 0) ^ (b3 < 0) ; 
res3 =  (sign3 == 0 )? min13 : -min13 ; 
// /////////////////
min14 = abs(a4) ; 
min24 = abs(b4) ; 

if(min14>min24)
  min14=min24 ; 

sign4 = (a4 < 0) ^ (b4 < 0) ; 
res4 =  (sign4 == 0 )? min14 : -min14 ; 

// /////////////////

// attention à la propagation du signe => maskage
int ret = (res1 & 0xFF) | ((res2<<8)&0xFF00)  | ((res3<<16)&0xFF0000) | ((res4<<24)&0xFF000000);

WRITE_RD(ret);