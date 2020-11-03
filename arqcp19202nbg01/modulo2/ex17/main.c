#include <stdio.h>
#include "calculator.h"

	int A = 0, B = 0, C = 0, D = 0;

	int main(void) {
	  
		A = -4;
		B = 2;
		C = -3;
		D = 1;
	
		/*Divide A por B*/
		division();
		printf("%d / %d = %d\n",A,B,res);
		/*Multiplica C por D*/
		multiplication();
		printf("%d x %d = %d\n",C,D,res);
		/*Soma B com C*/
		sum();
		printf("%d + %d = %d\n",B,C,res);
		/*Subtrai D a A*/
		subtraction();
		printf("%d - %d = %d\n",A,D,res);
		/*Módulo de A*/
		modulus();
		printf("|%d| = %d\n",A,res);
		/*Potencia 2 de B*/
		power2();
		printf("%d^2 = %d\n",B,res);
		/*Potencia 3 de C*/
		power3();
		printf("%d^3 = %d\n",C,res);
     
	return 0; 
}
