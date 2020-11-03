#include <stdio.h>
#include "activate_bits.h"

  int main(void) {

	int left = 24;
	int right = 7;
	int a = -1;
	
	int res = activate_bits(a, left, right);
	printf("res = 0x%x\n", res);
	printf("res = %d\n", res);
     
	return 0; 
}
