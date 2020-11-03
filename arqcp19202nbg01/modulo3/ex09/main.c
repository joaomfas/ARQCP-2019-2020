#include <stdio.h>
#include "vec_search.h"
	
	
	short *ptrvec;
	int num;
	int x;
	
	


	int main(){
		short v[]={1,1,1,1,1,1,1,1,10};  
		ptrvec = v;
		num = 9;
		x= 100;
		
		printf("%p\n",vec_search());

	  return 0;
	}
