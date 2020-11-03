#include <stdio.h>
#include "test_equal.h"

  int main(void) {
    
    char *a, *b;
    
    a= "a";
    b="ab";
    
    int res = test_equal(a,b);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
