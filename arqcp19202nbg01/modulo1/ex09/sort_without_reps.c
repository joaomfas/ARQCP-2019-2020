#include <stdio.h>

int sort_without_reps(int *src, int n, int *dest){

	int i=0, j=0, length = 0, flag =0;
	int *first_ptr, *second_ptr, *min;
	first_ptr = src;
	second_ptr = dest;
	for(i=0; i<n ; i++){
		for(j=0;j<length;j++){
			if(*first_ptr == *second_ptr){
				flag = 1;
			}
			second_ptr++;
		}
		//reset do apontador para o segundo vetor
		second_ptr = dest;
		if(flag!=1){ //verifica se nao encontrou nenhum valor igual
			*(dest + length) = *first_ptr;
			length ++;
			}
		flag = 0;
		first_ptr++;
	}
	// reset das variaveis
	flag =0;
	first_ptr = dest;
	second_ptr = dest+1;
	
	for(i=0;i<length-1;i++){
			min=first_ptr;
			for(j=i+1;j<length;j++){
				if(*min>*second_ptr){
					min = second_ptr;
				}
				second_ptr++;
			}
		flag=*first_ptr;
		*first_ptr= *min;
		*min = flag;
		first_ptr++;
		second_ptr = first_ptr + 1;
		
		}
	
	
	return length;
}
