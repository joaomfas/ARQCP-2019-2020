#include <stdio.h>

int activate_bit(int *ptr, int pos){
		
		
		int n =0;
		
		if((*ptr & (1 << pos ))==0){
		*ptr |= (1 << pos );
		n=1;
	}
			
		return n;
		
	}
