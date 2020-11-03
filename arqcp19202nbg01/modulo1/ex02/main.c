#include <stdio.h>
#include "copy_vec.h"

int main(){
	int vec1[] = {1,2,3,4,5,6,7};
	
	printf("Quantos elementos pretende copiar?\n");
	int n = 0;
	scanf("%d",&n);
	int vec2[n];
	
	copy_vec(vec1, vec2, n);
	
	int j;
	for(j=0; j < n; j++){
		printf("%d",vec2[j]);
	}
	
	printf("\n");
	return 0;
}
 
