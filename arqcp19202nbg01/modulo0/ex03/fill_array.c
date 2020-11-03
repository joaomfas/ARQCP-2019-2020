#include <stdio.h>
#include "avg_array.h"

void fill_array(int *array){
	
	int i;

	for(i = 0; i<10; i++)
	{
		printf("Introduza o elemento %d\n",i);
		scanf("%d",(array+i));
	}
	avg_array(array);
}
