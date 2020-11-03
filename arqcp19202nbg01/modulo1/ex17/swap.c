	
	void swap(int* vec1, int* vec2, int size){
		
		int aux[size], i=0;
		
			
		for(i=0;i<size;i++){
			
			*(aux+i) = *(vec1+i);
			*(vec1+i) = *(vec2+i);
			*(vec2+i) = *(aux+i);
			
		}
	}
