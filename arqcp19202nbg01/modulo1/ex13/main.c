#include <stdio.h>
#include "where_is.h"

int main(){

	char *string = " c", *aux;
	int length = 0, i = 0, nr_rep = 0;
	aux = string;
	while (*aux != '\0'){
		length++;
		aux++;
	}
	
	int vec[length];
	aux = string;
	for(i = 0; i < length; i++){
		vec[i] = 0;
	}
	
	nr_rep = where_is(string, 'c', vec); 
	
	printf("Numero de repeticoes:	%d\n",nr_rep);
		
	for(i = 0; i < nr_rep; i++){
		printf("%d\n",vec[i]);
	}
	
	return 0;
}
