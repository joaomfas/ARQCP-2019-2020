#include <stdio.h>
#include "swap.h"

int main(){
	
	int vec1[]={1,1,1,1}, vec2[]={-1,-1,-1,-1}, size = 4, i=0;
		swap(vec1, vec2, size);
		
		for(i=0;i<size;i++){
			printf("%d		%d\n",*(vec1+i),*(vec2+i));
		}
		
	return 0;
}
