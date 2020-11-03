#include <stdio.h> 
#include <string.h>
#include "fill_s1.h"

int main(void){
	
	s1 s;
	
	int vi = 10;
	char vc = 20;
	int vj = 30;
	char vd = 25;
	
	s1 *s_ptr = &s;
	
	fill_s1(s_ptr, vi, vc, vj, vd);
	
	printf("i = %d\n", s.i);
	printf("c = %hu\n", s.c);
	printf("j = %d\n", s.j);
	printf("d = %hu\n", s.d);
		
	return 0;
}
