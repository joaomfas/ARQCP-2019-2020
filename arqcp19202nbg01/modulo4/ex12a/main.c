#include <stdio.h>
#include "activate_bit.h"
	
	

  int main(void) {
    
    int *ptr;
   
    int pos = 0x11, n=12;
    ptr = &n;
    int res = activate_bit(ptr,pos);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
