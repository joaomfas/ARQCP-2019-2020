#include <stdio.h>
#include "sum_multiples_x.h"
	
	

  int main(void) {
    
    char *vec;
    int x= 0xfff0500;
    char v[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,0};
    vec = v;
    int res = sum_multiples_x(vec, x);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
