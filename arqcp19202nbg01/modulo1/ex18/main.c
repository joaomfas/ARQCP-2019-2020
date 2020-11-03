#include <stdio.h>
#include "compress_shorts.h"

int main(){
	short array_shorts[] = {1,5,6,8};
	int array_s_size = sizeof(array_shorts)/sizeof(short);
	int array_int[array_s_size/2];
	
	printf("%s","{");
	int i;
	for(i = 0; i < array_s_size/2; i++){
		printf(" %d",*(array_int+i));
	}
	printf("%s\n"," }");
	
	return 0;
}
