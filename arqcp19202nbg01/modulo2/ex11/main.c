#include <stdio.h>
#include "test_flags.h"

	int op1 = 0, op2 = 0;

	int main(void) {
	  
		op1 = 2;
		op2 = 78;
		char res;
		res = test_flags();
		printf("%c\n", res);
     
	return 0; 
}
