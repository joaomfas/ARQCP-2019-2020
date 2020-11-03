#include <stdio.h>
#include "vec_greater20.h"
	
	
	long long *ptrvec;
	int num;
	
	
	


	int main(){
		long long v[]={1,0,-1};
		ptrvec = v;
		num = 3;
		
		
		printf("%d\n",vec_greater20());

	  return 0;
	}
