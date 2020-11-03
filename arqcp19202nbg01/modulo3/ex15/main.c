#include <stdio.h>
#include "sum_first_byte.h"
	
	
	int *ptrvec;
	int num;
	
	
	


	int main(){
		int v[]={2002,1,1,1,1,1,1,1,1}; 
		ptrvec = v;
		num = 9;
		int res = sum_first_byte();
		
		printf("%d\n",res);
		
		
	  return 0;
	}
