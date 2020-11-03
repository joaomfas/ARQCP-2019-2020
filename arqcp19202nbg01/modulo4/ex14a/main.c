#include <stdio.h>
#include "join_bits.h"
	
	

  int main(void) {
    
    int a=0, b=-1, pos=8;
    
    int res = join_bits(a,b,pos);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
