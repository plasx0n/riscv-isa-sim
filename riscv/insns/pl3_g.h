//g func for polar codes 

int8_t sa = RS1; 
int8_t la = RS2; 
int8_t lb = RS3; 

int8_t res =0 ; 

    if ( sa==0 )
    {
        res=  la+lb ; 
    }
    else
    { 
        res = lb-la ; 
    }

WRITE_RD(res); 