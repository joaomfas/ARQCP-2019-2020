#ifndef EX_H
#define EX_H
typedef struct{
	char* carro;
	unsigned char* tempos;
	unsigned int tempo_total;
}Resultados;

unsigned char tempo_total(Resultados*, int);
char* calcula_vencedor(Resultados*, int, int, unsigned char*);
#endif
