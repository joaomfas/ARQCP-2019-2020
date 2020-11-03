#include <stdio.h>
#include "exists.h"

	short* ptrvec;
	int num;
	short x;

	int main(void) {
		
		short vec[] = {};
		
		num = 0;
		x = 0;
		ptrvec = vec;
		
		int res = exists();
		printf("Vec duplicates result = %d\n",res);
		
		short int vec2[] = {3,2,-1,1};
		num = 4;
		ptrvec = vec2;
		res = vec_diff();
		printf("Vec has %d numbers without duplicates\n",res);
	
	return 0; 
}
