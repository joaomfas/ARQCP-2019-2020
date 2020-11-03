#include <stdio.h>
#include "frequencies.h"
	
	
	char *ptrgrades;
	int num;
	int *ptrfreq;
	
	
	


	int main(){
					
		int freq1[21]; 
		int i=0;
		
		char v[]={20,10,10,10,10,10,10,10,10}; 
		ptrgrades = v;
		ptrfreq = freq1;
		num = 9;
		
		frequencies();
		for(i=0;i<21;i++){
		printf("%d\n",*(ptrfreq+i));
	}
		
	  return 0;
	}
