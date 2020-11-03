#include <stdio.h>
#include "getArea.h"

	int base = 0, height = 0;

	int main(void) {
	  
		base = 2;
		height = 3;
		
		int res = getArea();
		
		printf("Area = %d\n",res);
     
	return 0; 
}
