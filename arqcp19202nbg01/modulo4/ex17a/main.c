#include <stdio.h>
#include "add_byte.h"

  int main(void) {

	int vec1[]={6,0xffffffff,0xff,0xfffff0ff,0xfffff8ff,0,4};
	int vec2[7];
	int x = 5;
	
	add_byte(x, vec1, vec2);
	
	int i;
	printf("{");
	for(i=0; i<*vec2;i++){
		printf("%X%s", vec2[i],i==7-1 ? "":";");
	}
	printf("}\n");
     
	return 0; 
}
