int8_t a = RS1; 
int8_t res = 0 ; 
if(a<=0){
    res = -a; 
}else{
    res = a; 
}

WRITE_RD(res);
