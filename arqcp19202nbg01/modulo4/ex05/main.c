#include <stdio.h>
#include "inc_and_square.h"

  int main(void) {
    
    int v1 = -1;
    int v2 = -1;
    
    int* ptrv1 = &v1;
    
    int res = inc_and_square(ptrv1, v2);
    
    printf("v1 = %d\nres = %d\n",v1,res);
     
	return 0; 
}
