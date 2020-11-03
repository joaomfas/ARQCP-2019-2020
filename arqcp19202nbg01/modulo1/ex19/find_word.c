#include <stdio.h>
	
	char* find_word(char* str, char* word, char* inicial_addr){
		char *aux, *aux_word;
		int size=0, i=0, flag =0;
	
		aux = inicial_addr;
		aux_word = word;
		
		if(*str == '\0' || *inicial_addr == '\0' || *word == '\0'){
			return NULL;
			}
		
		while(*aux_word!='\0'){ // procura o tamanho da palavra!
			size++;
			aux_word++;
		}
	
		while(*aux != '\0' && flag !=size){ //para quando chegar ao fim da string, ou
			for(i=0;i<size;i++){
				if(!(*(aux+i)+32 == *(word+i) || *(aux+i)-32 == *(word+i) || *(aux+i) == *(word+i))){ // verifica se o carater é igual ao maiusculo, minusculo ou ao proprio caracter
					flag = 0;
					aux++;
					i=size;
				}else{
					flag++;
				}	
			}
		} 
		
		if(flag!=size){
			aux = NULL;
		}
		
	return aux;
		

}
