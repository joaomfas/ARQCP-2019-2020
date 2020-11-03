#include <stdio.h>
#include "calc.h"

  int main(void) {
    
    int *b;
    int a=0, c=0;
    int v[] = {};
    b=v;
    int res = calc(a,b,c);
    
    printf("resultado = %d\n", res);
     
	return 0; 
}
