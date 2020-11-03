#include <stdio.h>
#include "vec_zero.h"

	short int* ptrvec;
	int num;

	int main(void) {
		short int vec[] = {100,100,100,100,1000,1000,1000,1000,2000};
		
		ptrvec = vec;
		num = 9; 
		
		int num_changes = vec_zero();
		
		int i = 0;
		for(i = 0; i < num; i++){
			printf("%d\n",vec[i]);
		}
		
		printf("\n%d changes were made\n", num_changes);
	
	return 0; 
}
