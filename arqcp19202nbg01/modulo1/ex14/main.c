#include <stdio.h>
#include "frequencies.h"

int main(){
	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 
		0.0, 12.67, 16.23, 18.75};
	int n = sizeof(grades)/sizeof(grades[0]);
	
	int freq[21];
	
	frequencies(grades, n, freq);
	
	int *ptr = freq;
	
	int i;
	
	printf("%s","{");
	for(i = 0; i<21; i++){
		printf("%d",*ptr);
		ptr++;
	}
	
	printf("%s","}");
	
	return 0;
}
