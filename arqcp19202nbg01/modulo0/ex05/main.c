#include "string_to_int.h"
#include <stdio.h>

int main(void){
	
	char str[] = "";
	printf("Insert a string with digits\n");
	scanf("%s",str);

	char* ptr = str;
	int number = string_to_int(ptr);
	printf("%d\n",number);
	
	return 0;
}
