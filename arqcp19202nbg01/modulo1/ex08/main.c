#include <stdio.h>
#include "array_sort2.h"

int main(){
	int vec[] = {1,3,5,2,4};
	int n = sizeof(vec)/sizeof(vec[0]);
	array_sort2(vec, n);
	
	int i;
	for(i = 0; i<n; i++){
		printf("%d",vec[i]);
	}
	printf("\n");
	
	return 0;
}
