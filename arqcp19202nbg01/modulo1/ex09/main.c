#include <stdio.h>
#include "sort_without_reps.h"

int main(){

	int vec[] = {2,1,1,1,1,1,1,1,1};
	int n=9,i=0;
	int vec2[] = {0,0}; 
	int length = sort_without_reps(vec,n, vec2);
	printf("%d\n",length);
	for(i=0;i<length;i++){
		printf("MAIN %d\n",vec2[i]);
	
	}

	return 0;
}
