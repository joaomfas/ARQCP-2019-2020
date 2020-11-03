#include <stdio.h> 
#include <stdlib.h>

int** add_matrixes(int** a, int** b, int y, int k){
	int i;
	int j;
	
	int** res;
	
	for(i = 0; i < y; i++){
		//Add lines. If i=0 mem allocation is used. Else memory is reallocated.
		if(i == 0){
			res = (int**) calloc((i+1), sizeof(int*));
		}else{
			res = (int**) realloc(res, (i + 1));
		}
		
		for(j = 0; j < k; j++){
			
			if(j == 0){
				*(res + j) = (int*) calloc((j + 1), sizeof(int));
			}else{
				*(res + j) = (int*) realloc(res, (j + 1));
			}
			 
			 *(*res + j) = *(*a + j) + *(*b + j);
		}
	}
	
	return res;
}
