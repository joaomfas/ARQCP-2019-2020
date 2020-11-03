#include <stdio.h>
#include "activate_bits.h"

  int main(void) {

	int left = 31;
	int right = 0;
	int a = 0;
	
	int res = activate_bits(a, left, right);
	printf("res = 0x%x\n", res);
	printf("res = %d\n", res);
     
	return 0; 
}
