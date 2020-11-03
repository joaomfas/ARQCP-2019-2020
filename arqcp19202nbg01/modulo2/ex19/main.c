#include <stdio.h>
#include "needed_time.h"

	short current = 0, desired = 0;

	int main(void) {
	  
		current = -5;
		desired = 5;
		
		int time = needed_time();
		printf("Tempo necessário = %d s\n", time);
     
	return 0; 
}
