#include <stdio.h>
#include "join_bits.h"

  int main(void) {
    
    int a = -1 , b = 0, pos = 0;
    
    int res = join_bits(a, b, pos);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
