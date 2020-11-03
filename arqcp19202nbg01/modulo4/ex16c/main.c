#include <stdio.h>
#include "changes_vec.h"

  int main(void) {
    
    int *ptr;
    int num = 8, i = 0;
    int v[]={0,0xffffffff,0xff,0xff0fffff,0xff8fffff,0xff7fffff,0x700000,0x800000};
    ptr = v; // {0,0xff0fffff,0xff,0xff0fffff,0xff7fffff,0xff7fffff,0x700000,0x700000}
    changes_vec(ptr,num);
    for(i=0; i< num; i++)
    printf("resultado = %04x\n", *(ptr+i));
     
	return 0; 
}
