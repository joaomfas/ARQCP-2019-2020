#include <stdio.h>
#include "count_even.h"

  int main(void) {
    
    int vec[] = {2,1,7,4,-2};
    int* ptrvec = vec;
    int n = 5;
    
    int res = count_even(ptrvec, n);
    
    printf("res = %d\n",res);
     
	return 0; 
}
