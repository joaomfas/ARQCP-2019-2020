#include <stdio.h>
#include "sort_without_reps.h"

	int* ptrsrc;
	int num;
	int* ptrdest;

	int main(void) {
			int array_src[] = {2, 1, 1, 1, 1, 1, 1, 1, 1};
			num = sizeof(array_src)/sizeof(int);
			int array_dest[2];
			ptrsrc = array_src;
			ptrdest = array_dest;
			
			int res = sort_without_reps();
			
			int i;
			for(i = 0; i < res; i++){
				printf("%d\n",ptrdest[i]);
			}
	
	return 0; 
}
