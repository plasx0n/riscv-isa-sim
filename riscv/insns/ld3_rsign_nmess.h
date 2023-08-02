int8_t a = RS1; 
int8_t b = RS2;

int8_t eval = (b ^ (a >= 0)? 1 : 0 );  
int8_t res= ( (eval==1)? RS3 : -RS3 ); 
WRITE_RD(res); 
