#include <stdio.h>
#include <math.h>

int join_bits(int a, int b, int pos){
		
		
		int less_sig = a, most_sig = b, num =2, i =0;
		
		int mask1 =0, mask2=0;
		
		for(i=0;i<pos;i++){
			num = num*2;
		}
		num = num -1;
		mask2 = ~num ;
		mask1 = num;
		most_sig &= mask2;		//Obtem os primerios bits de b
		less_sig &= mask1;		//Obtem os ultimos valores de a
		
		less_sig |= most_sig;
	return less_sig;
		
	}
