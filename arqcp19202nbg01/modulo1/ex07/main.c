#include <stdio.h>
#include "array_sort1.h"

int main(){
	int vec[] = {0,1,8,7,9,7};
	int n=6,i=0;
	
	array_sort1(vec,n);
	
	for(i=0;i<n;i++){
		printf("%d\n",vec[i]);
	
	}


return 0;
}

