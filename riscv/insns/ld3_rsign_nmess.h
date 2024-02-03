
// rD[Vx] :=   rS1[Vx] xor ( rS2[Vx] >= 0 ) ?
            // rS3[Vx] : -rS3[Vx]
int8_t a = RS1;
int8_t b = RS2;
int8_t c = RS3; 
int8_t temp;

temp = (b>=0)?1:0;
int8_t temp2 = a^temp;
int8_t res = (temp2)? c : -c ; 
WRITE_RD(res);

