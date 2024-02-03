// int8_t min_ = ld_min_sorting(min1,temp,min2);

int8_t min1 = RS1; 
int8_t temp = RS2; 
int8_t min2 = RS3; 

int8_t mask = (min1 != temp) ? 0x00 : 0xff ; 
int8_t min_t = min1 & ~mask ; 
int8_t min_u = min2 & mask ; 
int8_t min_  = min_t | min_u ; 

WRITE_RD(min_); 





