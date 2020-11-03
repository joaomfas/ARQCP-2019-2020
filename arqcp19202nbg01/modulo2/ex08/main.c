#include "asm.h"
#include <stdio.h>

int main(){
	short aux = 0;

	aux = crossSumBytes();
	printf("%c",aux);

  return 0;
}
