#include "find_word.h"

void find_all_words(char* str, char* word, char** addrs){
	char* ptr_word = 0;
	char* ptr_init_add = str;
	int count = 0;
	
	do{
		ptr_word = find_word(str, word, ptr_init_add);
		if(ptr_word != 0){
			addrs[count] = ptr_word;
			count++;
			ptr_init_add = ptr_word+1;
		}	
	}while(ptr_word != 0);
}
