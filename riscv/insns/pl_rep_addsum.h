//need to fill this one out 

int a   = RS1 ; 
int b   = RS2 ; 

int16_t a1,a2 ; 
int16_t b1,b2 ; 


a1 = (a<<16 )>>16 ; 
a2 = (a     )>>16 ; 

b1 = (b<<16 )>>16;
b2 = (b     )>>16;

a1 = (a1<0)?0x01:0X00 ;  
a2 = (a2<0)?0x01:0X00 ;  
b1 = (b1<0)?0x01:0X00 ;  
b2 = (b2<0)?0x01:0X00 ;  

int res = (a1 & 0xFF) | ((a2<<8)&0xFF00)  | ((b1<<16)&0xFF0000) | ((b2<<24)&0xFF000000);

WRITE_RD(res) ; 