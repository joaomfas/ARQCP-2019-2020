int sum_even(int *p, int num){
	int soma=0;
	int i=0;
	for(i=0; i<num;i++){
		if(*p % 2 == 0){
			soma = soma + *p;
		}
		p++;
		}

return soma;

}
