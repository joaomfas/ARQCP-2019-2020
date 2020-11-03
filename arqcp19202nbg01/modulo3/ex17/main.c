#include <stdio.h>
#include "array_sort.h"
	
	
	int *ptrvec;
	int num;
	
	
	


	int main(){
		int v[]={1,1,1,1,1,1,1,1,2};
		ptrvec = v;
		num = 9;
		int i=0;
		array_sort();
		for(i=0;i<num;i++){
		printf("%d\n",*(ptrvec+i));
	}
		
	  return 0;
	}
