#include <stdio.h>
#include "test_even.h"
#include "vec_sum_even.h"

	int even;
	int *ptrvec;
	int num;

	int main(void) {
	  
		even = -3;
	
		int res_test_even = test_even();
		printf("Test_even for %d = %d\n",even,res_test_even);
		
		int vec[] = {1,2,3,4,5,-6};
		
		num = 6;
		ptrvec = vec;
		
		int result_vec_even_sum = vec_sum_even();
		printf("Sum even numbers = %d\n", result_vec_even_sum);
    
	return 0; 
}
