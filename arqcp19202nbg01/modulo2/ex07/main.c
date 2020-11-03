#include <stdio.h>
#include "crossSumBytes.h"

short s1=0, s2=0;

  int main(void) {
	  
     printf("Valor op1: ");
     scanf("%hu",&s1);
     printf("Valor op2: ");
     scanf("%hu",&s2);
     short res = crossSumBytes();
     printf("short = %hu\n", res);
     
	return 0; 
}
