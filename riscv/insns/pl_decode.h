//need to fill this one out 
//callDecode(*decode,*ptr_sum,*fz_bits) ; 

int8_t res ; 

if ( RS2 == 0 )
	res = RS1 ;
else
	res = 0;

WRITE_RD(res);