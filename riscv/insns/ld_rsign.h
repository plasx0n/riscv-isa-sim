int8_t a = RS1;
int8_t b = RS2;
int8_t temp;

temp = (b>=0)?1:0;
int8_t res = a^temp;
WRITE_RD(res);
