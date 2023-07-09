int8_t a = RS1;
int8_t b = RS2;
int8_t res;

if(a>=1){
	res = b;
}
else{
	res = -b;
}
WRITE_RD(res);


