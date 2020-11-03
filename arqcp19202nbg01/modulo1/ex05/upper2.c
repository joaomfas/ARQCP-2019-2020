void upper2 (char *str){
	
	char *ptr;
	ptr = str;
	while(*ptr != '\0'){
		
		if(*ptr>= 'a' && *str <='z') {
			*ptr = *ptr -32;
		}
		ptr++;
	};
}
