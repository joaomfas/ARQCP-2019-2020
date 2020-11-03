int str_size(char*);

char* where_exists(char* str1, char* str2){
	
	int str1_size = str_size(str1);
	int str2_size = str_size(str2);
	int cont = 0;
	int flag = 0;
	char *ptr = 0;
	int i,j;
	
	if(str2_size >= str1_size){
		for(i = 0; i < str2_size; i++){
			if(str1_size <= (str2_size - i)  && cont < str1_size){
				if(*(str1+cont) == *(str2+i)){
					if(flag == 0){
						ptr = str2+i;
						flag = 1;
					}
					cont++;
				}else{
					ptr = 0;
					flag = 0;
					cont = 0;
				}	
			}
		}
	}
	return ptr;
}

int str_size(char* str){
	int size = 0;
	
	while(*str != '\0'){
		size++;
		str++;
	}
	
	return size;
}
