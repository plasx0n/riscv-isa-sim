//need to fill this one out 

int8_t res ;

if(RS1 == 1){
  res = 0xFF;
}else{
  res = 0x00; 
}

// ((reg_op1[31:24]) == 1 )? 8'hff : 8'h00 ,

WRITE_RD(res);