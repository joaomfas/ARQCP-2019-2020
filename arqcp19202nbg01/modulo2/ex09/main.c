#include <stdio.h>
#include "sum_and_subtract.h"

	char A = -1;
	short B = 0;
	int C = 0, D = 0;
	long long res;

	int main(void) {
	  
		 A = -1;
		 B = 1;
		 C = 5000;
		 D = -5000;
		 res = sum_and_subtract();
		 printf("result = %lld\n", res);
     
	return 0; 
}
