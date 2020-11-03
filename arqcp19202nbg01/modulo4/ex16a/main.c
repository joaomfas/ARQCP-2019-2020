#include <stdio.h>
#include "changes.h"
	
	

  int main(void) {
    
    int *ptr;
    int n= 0xff7fffff;
    ptr = &n;
    changes(ptr);
    
    printf("resultado = %d\n", *ptr);
     
	return 0; 
}
