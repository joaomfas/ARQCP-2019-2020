#include <stdio.h> 
#include <stdlib.h>
#include "ex_modelo.h"

int main(void){
	int num_cifras = 2;
	short text_cif[2][7] = {{12105, 2136, 7692, 8009, 23405, 10621, 14460}, {15956, 6721, 7692, 8009, 23405, 10621, 14460}};
	short chaves[2] = {31532, 31532};
	short tams[2] = {sizeof(text_cif[0])/sizeof(short), sizeof(text_cif[1])/sizeof(short)};
	Cifra* cifras = (Cifra*) malloc(num_cifras * (sizeof(Cifra)));
	int i;
	for(i = 0; i < num_cifras; i++){
		Cifra cif;
		cif.texto_cifrado = text_cif[i];
		cif.tamanho_cifrado = tams[i];
		int tam_original = 2*cif.tamanho_cifrado + 1;
		cif.texto_original = (char*) malloc(tam_original * sizeof(char));
		cifras[i] = cif;
	}
	
	for(i = 0; i < num_cifras; i++){
		Cifra* c = &cifras[i];
		decifra_string(c, chaves[i]);
	}
	
	for(i = 0; i < num_cifras; i++){
		printf("%s\n", cifras[i].texto_original);
		free(cifras[i].texto_original);
	}
	free(cifras);

	return 0;
}
