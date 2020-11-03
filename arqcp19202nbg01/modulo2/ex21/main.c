#include <stdio.h>
#include "new_salary.h"

	int code = 0, currentSalary = 0;

	int main(void) {
	  
		code = 10;
		currentSalary = 100;
		
		int newSalary = new_salary();
		printf("Novo salário = %d euros\n", newSalary);
     
	return 0; 
}
