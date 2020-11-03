#include <stdio.h>
#include "capitalize.h"

int main(){
	char str[] = "the number must be SAVED";
	capitalize(str);
	
	printf("%s\n",str);
	
	return 0;
}
