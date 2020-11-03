#include <stdio.h>

void changes(int *ptr){
	
	int mask1 = 15728640; 	// 1111 0000 0000 0000 0000 0000
	int aux=0;
	aux = *ptr;
	
	aux &= mask1;
	
	if(aux>7340032){ 		// 0111 0000 0000 0000 0000 0000
		*ptr ^= mask1;	
	}
	
}
