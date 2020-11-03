#include <stdio.h>
#include "asm.h"

	char *ptr1 = 0;

	int main(){
		char string[] = "t0s";
		ptr1 = string;
		int res=0;
		res= zero_count();
		printf("%d",res);

	return 0;
	}
