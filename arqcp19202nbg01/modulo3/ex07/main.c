#include <stdio.h>
#include "decrypt.h"
	
	
	
	char *ptr1;
	


	int main(){
		char string[] = "CDEF a";
		ptr1 = string;
		int res =0, j=0;
		
		res = decrypt();
		
		for(j=0;j<6;j++)
		printf("%c",*(ptr1+j));
		
		printf("Resultado %d\n",res);
		

	  return 0;
	}
