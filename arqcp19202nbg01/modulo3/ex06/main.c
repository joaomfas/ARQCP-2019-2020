#include <stdio.h>
#include "encrypt.h"

	char *ptr1;

  int main(void) {
	  
	char int_array[] = "bla bla";
	ptr1 = int_array;
     
	encrypt();
     
    printf("%s\n",ptr1);
    
	return 0; 
}
