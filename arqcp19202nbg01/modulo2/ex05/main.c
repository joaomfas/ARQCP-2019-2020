#include <stdio.h>
#include "swapBytes.h"

short s=0;

  int main(void) {
	  
     printf("Valor s: ");
     scanf("%hu",&s);
     short res = swapBytes();
     printf("short = %hu 0x%hx\n", res, res);
     
	return 0; 
}
