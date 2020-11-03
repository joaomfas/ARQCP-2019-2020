int where_is(char* str, char c, int *p){

	char* aux;
	int length = 0, index =0, *vec;
	vec = p;
	aux = str;

	if(str == '\0'){
		return 0;
	}

	while(*aux != '\0'){
		if(*aux == c){
			*vec = index;
			vec++;
			length++;
		}
		index++;
		aux++;
	}
	p = vec;
	return length;
}
