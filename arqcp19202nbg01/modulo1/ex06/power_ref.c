void power_ref(int* ptr, int power){
	int valor_inicial = *ptr;
	int resultado;
	// Caso a potencia <0 o resultado é 0.
	// Caso contrario é calculada a potencia.
	if(power >= 0){
		resultado = 1;
		while(power != 0){
			resultado = resultado * valor_inicial;
			--power;
		}
		*ptr = resultado;
	}else{
		*ptr = 0;
	}
}
