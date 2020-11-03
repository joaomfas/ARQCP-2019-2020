#include <stdio.h> 
#include <stdlib.h>

int find_matrix(int** m, int y, int k, int num){
	int i;
	int j;
	for(i = 0; i < y; i++){
		for(j = 0; j < k; j++){
			if(*(*m + j) == num){
				return 1;
			}
		}
	}
	
	return 0;
}
