#include <stdio.h>
#include "vec_avg.h"
	
	
	int num;
	int *ptrvec;
	


	int main(){
		num = 3;
		int vec[] = {1,0,-1};
		ptrvec=vec;
		printf("%d\n",vec_avg());
		

	  return 0;
	}
