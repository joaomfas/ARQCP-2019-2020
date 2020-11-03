#include <stdio.h>
#include <string.h>

int count_words(char *str){
	
	int num_words = 0;
	int i = 0;
	int str_length = strlen(str);
	printf("len %d\n",str_length);
	
	for(i = 0; i<=str_length; i++){	
		if(*str == ' '){
			num_words++;
		}
		str++;
		printf("%d\n",*str);
	}
	
	return num_words;
}
