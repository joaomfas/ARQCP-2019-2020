#include <stdio.h>
#include "count_words.h"

int main(void){
	char str[] = "";
	printf("Insert the sentence\n");
	scanf("%s",str);
	
	char* ptr = str;
	int num_words = count_words(ptr);
	printf("The sentence has %d words\n",num_words);
	
	return 0;
}
