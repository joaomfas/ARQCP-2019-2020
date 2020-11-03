#include <stdio.h>
#include "where_exists.h"

int main(){
	char str1[] = "xrt";
	char str2[] = "xaixrarrxrt xrt xrt xrt";
	
	char* result = where_exists(str1, str2);
	char* expected = str2+8;
	
	printf("Result: %p\n", result);
	printf("Expected: %p\n", expected);
	
	return 0;
}
