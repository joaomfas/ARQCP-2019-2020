#include <stdio.h>

	void add_byte(char x, int* vec1, int* vec2) {
		int i;
		*vec2 = *vec1;
		vec2++;
		int aux;
		int aux1;
		for(i = 1; i <= *vec1; i++){
			aux = *(vec1+i) & 0xff;
			aux1 = *(vec1+i);
			aux1 = (int) aux1 | 0xff;
			aux = aux + x;
			aux = aux | 0xFFFFFF00;
			aux = aux & aux1;
			*vec2 = aux;
			vec2++;
		}
	}
