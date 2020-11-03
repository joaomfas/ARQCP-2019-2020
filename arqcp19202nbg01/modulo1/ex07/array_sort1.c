void array_sort1(int *vec, int n){
	int i=0, j=0, aux;
	int *ptr, *min, *ptr2;
	ptr = vec;
	ptr2 = vec + 1;
	
		
		
		for(i=0;i<n-1;i++){
			min=ptr;
			for(j=i+1;j<n;j++){
				if(*min>*ptr2){
					min = ptr2;
				}
				ptr2++;
			}
		aux=*ptr;
		*ptr= *min;
		*min = aux;
		ptr++;
		ptr2 = ptr + 1;
		
		}	
			
		
}
	
	
	

