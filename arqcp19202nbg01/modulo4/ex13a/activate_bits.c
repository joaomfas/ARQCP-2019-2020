#include <stdio.h>
#include "activate_bits.h"

	int activate_bits(int a, int left, int right) {
	
		if(left < 0 || right < 0 || left > 31 || right > 31){
			return 0;
		}
		
		int num = a;
	
		int mask;
		// invert left bits
		int i;
		for(i = left+1; i <= 31; i++){
			mask = 1 << i;
			num = num | mask;
		}
		
		// invert right bits
		for(i = right-1; i >= 0; i--){
			mask = 1 << i;
			num = num | mask;
		}
		
		return num;
	}
