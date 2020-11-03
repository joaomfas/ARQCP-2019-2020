#include <stdio.h>
#include <string.h>

void capitalize(char *str){

	int i = 0;

	while(*str != '\0'){
		if(*str == ' '){
			if(*(str+1) <= 122 && *(str+1) >= 97){
				*(str+1) = *(str+1) - 32;
			}
		}else if(i == 0){
			if(*(str) <= 122 && *(str) >= 97){
				*(str) = *(str) - 32;
			}
		}
		i++;
		str++;
	}
	
}
