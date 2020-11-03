#include <stdio.h>
#include "asm.h"

	int g= 0, h= 0, i= 2, j = 1, r = 0;

	int fC(){
		if (i==j)
			h=i-j+1;
		else
			h=i+j-1;
	return h;
	}

	int f2C(){
		int aux_i = i, aux_j = j;
		if(i>j)
			aux_i = i - 1;
		else
			aux_j = j + 1;
		h=aux_j*aux_i;

	return h;
	}
	
	int f3C(){
		if(i>=j){
			h=i*j;
			g=i+1;
		}
		else{
			h=i+j;
			g=i+j+2;
		}
		r=g/h;
		return r;
	}
	
	int f4C(){
		if(i+j<10)
			h=4*i*i;
		else
			h=j*j/3;
		return h;
	}
	
	
	int main(){

	int result =0;
	
	printf("Resultados em C\n");
	result = fC();
	printf("Resultado f():%d\n",result);
	result = f2C();
	printf("Resultado f2():%d\n",result);
	result = f3C();
	printf("Resultado f3():%d\n",result);
	result = f4C();
	printf("Resultado f4():%d\n",result);
	
	
	printf("Resultados em Assembly\n");
	printf("\n");
	result = f();
	printf("Resultado f():%d\n",result);
	result = f2();
	printf("Resultado f2():%d\n",result);
	result = f3();
	printf("Resultado f3():%d\n",result);
	result = f4();
	printf("Resultado f4():%d\n",result);
	
	

	  return 0;
}
