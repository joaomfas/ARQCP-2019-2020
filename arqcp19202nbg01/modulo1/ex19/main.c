#include <stdio.h>
#include "find_word.h"

int main(){
	
	char str[] = "zfzgzgzhZZjzkzkzkz";
	char *in_addr = str+8;
	int i =0;
	char *result;
	
	result = find_word(str, "zz", in_addr);
			
	printf("Resultado		Esperado\n");
	for(i=0;i<2;i++){
	printf("%p		%p\n",&result[i], &str[8+i]);
	
	}
	return 0;
}
