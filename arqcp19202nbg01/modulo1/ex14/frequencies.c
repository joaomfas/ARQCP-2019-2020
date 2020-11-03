void frequencies(float *grades, int n, int* freq){
	
	int i,j, cont;
	
	for(i = 0; i<=20; i++){
		cont = 0;
		for(j = 0; j<n; j++){
			int grade = (int) *(grades+j);
			if(grade == i){
				cont++;
			}
		}
		*(freq+i) = cont;
	}
}
