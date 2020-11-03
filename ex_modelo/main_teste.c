#include <stdio.h> 
#include <stdlib.h>
#include "ex_modelo.h"

int main_teste(void){
	Cifra cif;
	short text_cif1[7] = {12105, 2136, 7692, 8009, 23405, 10621, 14460};
	short chave1 = 31532;
	short tam1 = sizeof(text_cif1)/sizeof(short);
	
	cif.texto_cifrado = (short*) malloc(tam1*sizeof(short));
	int i;
	for(i = 0; i<tam1; i++){
		*(cif.texto_cifrado + i) = *(text_cif1 + i);	
	}
	short tam_orig1 = tam1*2+1;
	cif.texto_original = (char*) malloc(tam_orig1*sizeof(char*));
	cif.tamanho_cifrado = tam1;
	
	Cifra* ptr_cif = &cif;
	decifra_string(ptr_cif, chave1);
	for(i = 0; i < (tam1*2+1); i++){
		printf("%c", *(cif.texto_original + i*4));
	}
	printf("\n");
	
	free(cif.texto_cifrado);
	free(cif.texto_original);
	return 0;
}
