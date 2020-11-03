#include <stdio.h>

void varSize(void){
	printf("Size of char type is %d byte\n",sizeof(char));
	printf("Size of int type is %d bytes\n",sizeof(int));
	printf("Size of unsigned int type is %d bytes\n",sizeof(unsigned int));
	printf("Size of long type is %d bytes\n",sizeof(long));
	printf("Size of short type is %d bytes\n",sizeof(short));
	printf("Size of long long type is %d bytes\n",sizeof(long long));
	printf("Size of float type is %d bytes\n",sizeof(float));
	printf("Size of double type is %d bytes\n",sizeof(double));
}
