int8_t a = RS1 ;
int8_t b = RS2 ;
int8_t res ;
if(a<b){
	res = b ;
}else{
	res = a;
}
WRITE_RD(res);

