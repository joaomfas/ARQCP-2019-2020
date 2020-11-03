#include <stdio.h>
#include "swap.h"

	char* ptr1;
	char* ptr2;
	int num;

	int main(void) {
		char array1[] = {1,2,3,4};
		char array2[] = {5,6,7,8};
		
		num = 4;
		ptr1 = array1;
		ptr2 = array2;
		
		swap();
	
		int i = 0;
		printf("Array1\n");
		for(i = 0; i < 4; i++){
			printf("%d,",array1[i]);
		}
		printf("\nArray2\n");
		for(i = 0; i < 4; i++){
			printf("%d,",array2[i]);
		}
		printf("\n");
	
	return 0; 
}
