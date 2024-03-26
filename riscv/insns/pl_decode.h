//need to fill this one out 
//callDecode(*decode,*ptr_sum,*fz_bits) ; 

int a = RS1;
int b = RS2; 
int res = 0 ; 

int8_t  a1,a2,a3,a4;
int8_t  b1,b2,b3,b4; 
int8_t  c1,c2,c3,c4; 

a1 = (a<<24)>>24;
a2 = (a<<16)>>24;
a3 = (a<<8 )>>24;
a4 = (a    )>>24;

b1 = (b<<24)>>24;
// b2 = (b<<16)>>24;
// b3 = (b<<8 )>>24;
// b4 = (b    )>>24;

// 
if ( b1 == 0 )
	c1 = a1 ;
else
	c1 = 0;

// 
if ( b1 == 0 )
	c2 = a2 ;
else
	c2 = 0;

// 
if ( b1 == 0 )
	c3 = a3 ;
else
	c3 = 0;

// 
if ( b1 == 0 )
	c4 = a4 ;
else
	c4 = 0;

// attention à la propagation du signe => maskage
res = (c1 & 0xFF) | ((c2<<8)&0xFF00)  | ((c3<<16)&0xFF0000) | ((c4<<24)&0xFF000000); 


WRITE_RD(res);