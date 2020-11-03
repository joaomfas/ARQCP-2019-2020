#include <stdio.h>
#include "count_seq.h"

	int* ptrvec;
	int num;

	int main(void) {
	
		int vec[] = {1,2,3,4,5,6,7,8,9,10};
		ptrvec = vec;
		num = sizeof(vec)/sizeof(int);
		
		printf("res = %d\n",count_seq());
	
	return 0; 
}
