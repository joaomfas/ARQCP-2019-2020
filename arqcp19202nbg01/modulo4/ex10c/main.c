#include <stdio.h>
#include "vec_count_bits_zero.h"


  int main(void) {
    
    int *ptr;
    int num =6 ;
    int v[] = {-1,-1,0,-1,-1,-1};
    ptr = v;
    int res = vec_count_bits_zero(ptr, num);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
