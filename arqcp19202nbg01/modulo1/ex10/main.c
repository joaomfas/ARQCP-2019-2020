#include <stdio.h>
#include "odd_sum.h"

int main(){
	int vec[] = {0};
	int sum = odd_sum(vec);
	printf("A soma dos valores impares é %d\n",sum);
	
	return 0;
}
