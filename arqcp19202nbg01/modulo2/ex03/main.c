#include <stdio.h>
#include "sum_v2.h"

int op1=0, op2=0;

  int main(void) {
	  
     printf("Valor op1:");
     scanf("%d",&op1);
     printf("Valor op2:");
     scanf("%d",&op2);
     int res=sum_v2();
     printf("sum = %d:0x%x\n", res, res);
     
	return 0; 
}
