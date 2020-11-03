#include <time.h>

void populate (int *vec, int num, int limit){
	int i=0;
	
	
	srand(time(0));
	for(i=0;i<num;i++){
		*(vec + i) = rand() % limit; 
	}
	
	}
