#include <stdio.h> 
#include <stdlib.h>
#include "find_matrix.h"

int main(void){
	int y = 2, k = 2;
	int **a;
	
	a = (int**) calloc(y, sizeof(int*));
	if(a == NULL){
		printf("Error reserving memory!\n"); exit(1);
	}
	
	/* Allocate memory*/
	int m;
	for(m = 0; m < y; m++){
		*(a+m) = (int*) calloc(k, sizeof(int));
		if(*(a+m) == NULL){
			printf("Error reserving memory!\n"); 
			exit(1);
		}
	}
	
	*(*a+1) = -1;
	
	int res = find_matrix(a, y, k, -1);
	printf("find(-1) = %d\n", res);
	
	res = find_matrix(a, y, k, 20);
	printf("find(20) = %d\n", res);
	
	/* Free memory */
	for(m = 0; m < y; m++){
		free(*(a+m));
		free(a);
	}	
	return 0;
}
