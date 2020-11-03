
#include <stdio.h>
#include "sum.h"

int main(){

int a = 0;
int b = 0;
int result = 0;
do{
printf("Insira o valor de a:\n");
scanf("%d",&a);

printf("Insira o valor de b:\n");
scanf("%d",&b);
result = sum(a,b);
printf("Resultado da soma: %d\n",result);
}
while(result<10);

return 0;
}
