#include <stdio.h>
#include "str_copy_porto.h"

	char *ptr1;
	char *ptr2;

  int main(void) {
    
    char str1[] = "hey";
    char str2[20];
    
    ptr1 = str1;
    ptr2 = str2;
    
    str_copy_porto();
    
    printf("%s\n",ptr2);
     
	return 0; 
}
