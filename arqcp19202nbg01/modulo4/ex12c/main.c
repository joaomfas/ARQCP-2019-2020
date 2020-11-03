#include <stdio.h>
#include "activate_2bits.h"

  int main(void) {
    
    int n = 0x11 , pos = 4;
    int *ptr;
    
    ptr = &n;
    int res = activate_2bits(ptr, pos);
    
    printf("resultado = %d\n%d\n", res, *ptr);
     
	return 0; 
}
