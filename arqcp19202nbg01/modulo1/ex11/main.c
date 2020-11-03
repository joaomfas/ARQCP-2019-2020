#include <stdio.h>
#include "palindrome.h"

int main(){

	char *str = "?asddsa";
	int result = palindrome(str);

	printf("%d\n",result);
	
	return 0;
}
