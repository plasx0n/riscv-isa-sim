int8_t a = RS1;
int8_t b = RS2;
int8_t c = RS3;
int8_t res ; 
int8_t temp; 


if(a>=b){
    temp = a;  
}else{
    temp = b; 
}

if(c>=temp){
    res = temp ; 
}else{
    res = c ; 
} 

WRITE_RD(res); 

