int8_t a = RS1;
int8_t b = RS2;
int8_t res;

if(a < b){
	res = a;
}else{
	res = b ;
}
WRITE_RD(res);

