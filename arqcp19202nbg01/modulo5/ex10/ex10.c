#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "new_str.h"

int main(void){
	
	char str[80] = "teste_teste_teste";
	
	char* str2 = new_str(str);
	
	printf("%s | strlen = %d\n",str2,strlen(str2));
	
	free(str2);
	
	return 0;
}
