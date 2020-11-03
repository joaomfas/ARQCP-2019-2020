#include <stdio.h> 
#include <string.h>
#include "update_address.h"

int main(void){
	char* add = "Lisboa";
	
	Student s;
	s.age = 25;
	s.number = 10;
	strcpy(s.name, "Pedro");
	strcpy(s.address, "Porto");
	
	Student *s_ptr = &s;
	
	update_address(s_ptr, add);
	
	printf("address: %s\n",s.address);
		
	return 0;
}
