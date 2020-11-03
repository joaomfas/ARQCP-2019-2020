#include <stdio.h>

int string_to_int(char* str){
	int number = 0;
	
	while(*str != '\0'){
		int val = (int) *str - '0';
		number = number*10+val;
		str++;
	}
	
	return number;
}
