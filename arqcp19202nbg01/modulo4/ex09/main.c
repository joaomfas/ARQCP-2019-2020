#include <stdio.h>
#include "calculate.h"

	void print_result(char op, int o1, int o2, int res) {
      printf("%d %c %d = %d\n", o1, op, o2, res);
    }

  int main(void) {
    int a = 5;
    int b = 3;
   
	int res = calculate(a,b);
	
	printf("res = %d\n", res);
     
	return 0; 
}
