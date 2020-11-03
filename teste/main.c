#include <stdio.h> 
#include <stdlib.h>
#include "ex.h"

int main(void){
	int num_results = 3;
	Resultados* results = (Resultados*) malloc(num_results * sizeof(Resultados));
	int num_voltas = 5;
	
	int i;
	for(i = 0; i < num_results; i++){
		results[i].tempos = (unsigned char*) malloc(num_voltas * sizeof(unsigned char));
	}
	
	results[0].carro = "Lento e furioso";
	results[1].carro = "Rápido e sereno";
	results[2].carro = "Domingueiro";
	 
	unsigned char res1[5] = {0xC7, 0xFB, 0xE2, 0xC2, 0xCF};
	unsigned char res2[5] = {0xBB, 0xA3, 0xB8, 0xE0, 0xA8};
	unsigned char res3[5] = {0xE8, 0xEB, 0xFB, 0xEA, 0xDA};
	results[0].tempos = res1;
	results[1].tempos = res2;
	results[2].tempos = res3;

	unsigned char volta[1];
	char* vencedor = calcula_vencedor(results, num_results, num_voltas, volta); 
	
	printf("Vencedor: %s\n", vencedor);
	
	for(i = 0; i < num_results; i++){
		free(results[i].tempos);
	} 
	
	free(results);
	return 0;
}
