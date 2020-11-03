#include <stdio.h>
#include "asm.h"

char byte1 =0, byte2 = 0;

int main(){
	
	byte1 =0;
	byte2=50;
	short aux = 0;
	aux = concatBytes();

	printf("%c\n",aux);

  return 0;
}
