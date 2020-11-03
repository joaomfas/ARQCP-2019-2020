#include <stdio.h>
#include "activate_bit.h"

  int main(void) {
    
    int n = 0x11 , pos = 4;
    int *ptr;
    
    ptr = &n;
    int res = activate_bit(ptr, pos);
    
    printf("resultado = %d\n%d\n", res, *ptr);
     
	return 0; 
}
