#include <stdio.h>
#include "sum_smaller.h"

  int main(void) {
    
    int num1=-1, num2 = -2;
    int *smaller;
    
    int res = sum_smaller(num1, num2, smaller);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
