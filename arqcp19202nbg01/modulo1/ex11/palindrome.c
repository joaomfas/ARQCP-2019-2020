int palindrome(char *str){
	char *start_ptr, *end_ptr;
	end_ptr = str;
	int length = 0, i = 0;
	while(*end_ptr != '\0'){
		length++;
		end_ptr++;
	}
	
	if(length==0){
		return 0;
	}
	
	end_ptr--;
	start_ptr = str;
	
	for(i=0;i<length/2;i++){
		while(*start_ptr < 65  || (*start_ptr > 90 && *start_ptr < 97) || *start_ptr > 122 ){
			start_ptr++;
			length--;
		}
		while(*end_ptr < 65  || (*end_ptr > 90 && *end_ptr < 97) || *end_ptr > 122 ){
			end_ptr--;
			length--;
		}
		
		if(!(*start_ptr + 32 == *end_ptr || *start_ptr - 32 == *end_ptr || *start_ptr == *end_ptr)){
			return 0;
		}
		start_ptr++;
		end_ptr--;
		
		
	}


return 1;
}
