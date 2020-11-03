#include <stdio.h>
#include "changes.h"

  int main(void) {
    
    int *ptr;
    int i=-1;
    ptr = &i ;
    
    changes(ptr);
    
    printf("resultado = %d\n", *ptr);
     
	return 0; 
}
