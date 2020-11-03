#include <stdio.h>

int sum_multiples_x(char *vec, int x){
	
	int mask1 = 65280; 	// 0000 0000 1111 1111 0000 0000
	int aux=0, i = 0, sum = 0;
	aux = x;
	aux &= mask1;
	aux = aux >> 8;
	
	while(*(vec+i) !=0){
		if(*(vec+i)%aux ==0){
			sum = sum + *(vec+i);
	}
	i++;
}
return sum;
}
