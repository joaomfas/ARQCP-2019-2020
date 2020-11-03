#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

char* new_str(char* ptr_str){
	char* new_ptr_str = (char*) malloc(sizeof(char));
	*new_ptr_str = *ptr_str;
	int i = 0;
	while(i < strlen(ptr_str)){
		i++;
		char* ptr_tmp = (char*) realloc(new_ptr_str, (i+1) * sizeof(char));
		if(ptr_tmp != NULL){
			new_ptr_str = ptr_tmp;
			ptr_tmp = NULL;
		}else{
			return NULL;
		}	
		*(new_ptr_str + i) = *(ptr_str + i);		
	}
	return new_ptr_str;
}
