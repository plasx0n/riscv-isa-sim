// //need to fill this one out 

// int8_t res ;

// if(RS1 == 1){
//   res = 0xFF;
// }else{
//   res = 0x00; 
// }

// // ((reg_op1[31:24]) == 1 )? 8'hff : 8'h00 ,

// WRITE_RD(res);

//need to fill this one out 
//callDecode(*decode,*ptr_sum,*fz_bits) ; 

int a = RS1;
int res = 0 ; 

int8_t  a1,a2,a3,a4;
int8_t  c1,c2,c3,c4; 

a1 = (a<<24)>>24;
a2 = (a<<16)>>24;
a3 = (a<<8 )>>24;
a4 = (a    )>>24;

// 
if ( a1 == 1 )
	c1 = 0xFF ;
else
	c1 = 0x00;

// 
if ( a2 == 1 )
	c2 = 0xFF ;
else
	c2 = 0x00;

// 
if ( a3 == 1 )
	c3 = 0xFF ;
else
	c3 = 0x00;

// 
if ( a4 == 1 )
	c4 = 0xFF ;
else
	c4 = 0x00;

// attention à la propagation du signe => maskage
res = (c1 & 0xFF) | ((c2<<8)&0xFF00)  | ((c3<<16)&0xFF0000) | ((c4<<24)&0xFF000000); 


WRITE_RD(res);