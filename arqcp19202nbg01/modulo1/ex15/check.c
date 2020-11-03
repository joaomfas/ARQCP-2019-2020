#include "inc_nsets.h"

int check(int x,int y, int z){

	if(x<y){
		if(y<z){
			inc_nsets();
			return 1;
		}
	}
	
	return 0;
	}
