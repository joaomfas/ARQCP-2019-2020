void compress_shorts(short* shorts, int n_shorts, int*integers){
	
	int i;
	
	for(i = 0; i < n_shorts; i++){
		*((short*) (integers) + i) = *(shorts+i);
	}
}
