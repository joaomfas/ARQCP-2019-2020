#include <stdio.h>
#include "asm.h"

		char *ptr1=0, *ptr2=0;

	int main(){
		char string[] = "Lindo", resultado[] ="";
		ptr1 = string;
		ptr2 = resultado;
		str_copy_porto2();
		printf("%s",ptr2);


	return 0;
}
