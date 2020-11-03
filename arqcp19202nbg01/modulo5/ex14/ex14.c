#include <stdio.h> 
#include <stdlib.h>
#include "add_matrixes.h"

int main(void){
	int y = 2, k = 2;
	int **a;
	int **b;
	
	a = (int**) calloc(y, sizeof(int*));
	b = (int**) calloc(y, sizeof(int*));
	if(a == NULL || b == NULL){
		printf("Error reserving memory!\n"); exit(1);
	}
	
	/* Allocate memory*/
	int m;
	for(m = 0; m < y; m++){
		*(a+m) = (int*) calloc(k, sizeof(int));
		*(b+m) = (int*) calloc(k, sizeof(int));
		if(*(a+m) == NULL){
			printf("Error reserving memory!\n"); 
			exit(1);
		}
	}
	
	*(*a+1) = -2;
	*(*b+1) = 1;
	
	
	int** res = add_matrixes(a, b, y, k);
	printf("find(-1) = %d\n", *(*res+1));

	
	/* Free memory */
	for(m = 0; m < y; m++){
		free(*(a+m));
		free(a);
	}	
	return 0;
}
