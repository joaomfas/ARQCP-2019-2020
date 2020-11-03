#include <stdio.h>
#include "compute.h"

	int A = 0, B = 0, C = 0, D = 0;

	int main(void) {
	  
		A = 8000;
		B = -8000;
		C = 40;
		D = -10;
	
		int res = compute();
		printf("Resultado = %d\n", res);
     
	return 0; 
}
