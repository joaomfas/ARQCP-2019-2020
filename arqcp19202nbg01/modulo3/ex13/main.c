#include <stdio.h>
#include "keep_positives.h"
	
	
	int *ptrvec;
	int num;
	
	
	


	int main(){
		int v[]={-1,-1,-1};
		ptrvec = v;
		num = 3;
		keep_positives();
		int i=0;
		for(i=0;i<num;i++){
		printf("%d\n",*(ptrvec+i));
		}
		
	  return 0;
	}
