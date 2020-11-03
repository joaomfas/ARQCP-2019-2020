#ifndef DECIFRA_PAR_H
#define DECIFRA_PAR_H
typedef struct{
	short *texto_cifrado;
	int tamanho_cifrado;
	char *texto_original; 
}Cifra;

void decifra_par(short, short, char*, char*);
void decifra_string(Cifra*, short);
#endif
