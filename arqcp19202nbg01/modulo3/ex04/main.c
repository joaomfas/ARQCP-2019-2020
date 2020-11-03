#include <stdio.h>
#include "vec_add_one.h"

	int *ptrvec;
	int num = 0;

  int main(void) {
	  
	  int int_array[] = {0};
	  ptrvec = int_array;
	  num = sizeof(ptrvec)/sizeof(int);
     
     vec_add_one();
     
    int i = 0;
    for(i = 0; i < num; i++){
			printf("%d",*(ptrvec+i));
	}
	printf("\n");
     
	return 0; 
}
