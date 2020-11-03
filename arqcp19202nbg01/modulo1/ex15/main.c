#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "inc_nsets.h"
#include <time.h>

int main(){

		int n_sets;
		int i=0,x=0,y=0,z=0;
		int vec[12];
				
		populate(vec, 12, 20);
		printf("\n");
		for(i=0;i<12;i=i+3){
			x=*(vec + i);
			y=*(vec + i + 1);
			z=*(vec + i + 2);
			int j = check(x,y,z);
			if(j ==1){
			printf("%d\n",*(vec+i));
			printf("%d\n",*(vec+i+1));
			printf("%d\n",*(vec+i+2));
		}
		}
		
		
		
	return 0;
}
