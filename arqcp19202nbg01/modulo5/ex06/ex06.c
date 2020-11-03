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
	
	int new_grades[10] = {15,16,13,15,17,15,14,14,18,19};
	
	update_grades(s_ptr, new_grades);
	
	int min = 15;
	int greater_grades[10] = {0,0,0,0,0,0,0,0,0,0};
	
	int result = locate_greater();
	
	
		
	return 0;
}
