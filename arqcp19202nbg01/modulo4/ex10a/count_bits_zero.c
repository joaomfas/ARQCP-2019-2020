#include <stdio.h>

int count_bits_zero(int x){
		int i;
		
		int n =0;
		for( i = 0; i<(sizeof(x)*8); i++){
			if((x & (1 <<i ))==0)
			n++;
			
		}
		
		return n;
		
	}
