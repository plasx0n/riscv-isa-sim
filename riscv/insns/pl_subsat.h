
int8_t  a = RS1; 
int8_t  b = RS2; 

int16_t val = 0 ; 
int8_t res = 0  ; 

val = a-b ; 

// evaluation uniquement sur G en 16 bits 
if( val >= 127 ){
    val =  127 ; 
}
else if( val <= -127)
{   
    val =  -127 ; 
}
res = (int8_t) val ; 
WRITE_RD(res); 