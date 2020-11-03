#include <stdio.h>
#include "power_ref.h"

int main(void){
	int num = 3;
	int* ptr = &num;
	printf("Valor inicial = %d\n",num);
	int power = -1;
	printf("Potencia = %d\n",power);
	power_ref(ptr, power);
	printf("Valor final = %d\n", num);
	
	return 0;
}
