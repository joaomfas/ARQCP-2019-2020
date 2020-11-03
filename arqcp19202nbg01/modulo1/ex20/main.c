#include <stdio.h>
#include "find_all_words.h"

int main(){
	char str[] = "this string is a test string";
	char word[] = "string";
	char *addrs[2];
	
	find_all_words(str, word, addrs);
	
	char* add1 = str + 5;
	char* add2 = str + 22;
	
	printf("expected\nadd1:%p\nadd2:%p\n",add1,add2);
	printf("result\nadd1:%p\n",addrs[0]);
	printf("add2:%p\n",addrs[1]);
	
	return 0;
}
