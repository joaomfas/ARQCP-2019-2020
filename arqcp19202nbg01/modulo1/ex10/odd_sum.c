int odd_sum(int* vec){
	int n = vec[0];
	int odd_sum = 0;
	int i;
	
	for(i = 1; i<=n; i++){
		if(vec[i] % 2 != 0){
			odd_sum += vec[i];
		}
	}
	
	return odd_sum;
}
