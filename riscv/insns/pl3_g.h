//g func for polar codes 

int8_t  sa = RS1; 
int8_t  la = RS2; 
int8_t  lb = RS3; 

int16_t val = 0 ; 
int8_t res = 0  ; 

if ( sa==0 )
{
    val = la+lb ; 
}
else
{ 
    val = lb-la ; 
}

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