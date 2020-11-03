#include <stdio.h>

void upper1(char* str){
	int i = 0;
	
	while(str[i] != '\0'){
		if(str[i] > 0x60 && str[i] < 0x7B){
			str[i] = (str[i]-0x20);
		}
		i++;
	}
}
