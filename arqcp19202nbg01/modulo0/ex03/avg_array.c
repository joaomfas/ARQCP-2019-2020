#include <stdio.h>

void avg_array(int *array){
	int sum = 0;
	int i;
	
	for(i = 0; i < 10; i++)
	{
		sum += *(array+i);
	}
	double avg = (double) sum/10;
	
	printf("A média dos elementos do array é %f\n", avg);
}
