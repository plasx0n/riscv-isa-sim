int8_t a =RS1;
int8_t b =RS2;
int8_t res ;
if(a!=b){
	res =0;
}else{
	res =0xff;
}
WRITE_RD(sext_xlen(res));
