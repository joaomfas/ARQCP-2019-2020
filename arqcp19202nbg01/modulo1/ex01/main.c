
#include <stdio.h>

int main(){

int x = 5;
int*xPtr = &x;
float y = *xPtr + 3;
int vec[] = {10, 11, 12, 13};

printf("Values of:\nx = %d;\ny = %f\n\n",x,y);

printf("Hexadecimal Addres:\n x = %p\n xPtr = %p\n",&x,&xPtr);

printf("Value pointed by xPtr: %d\n",*xPtr);

int i=0;

for(i=0;i<4;i++){
printf("Value of vec[%d]: %d \n",i,vec[i]);

}
printf("Adrres of:\n");
for(i=0;i<4;i++){
printf("vec[%d]: %p \n",i,&vec[i]);
//Os endereços são muito semelhantes, para cada endereço a um encremento de 4 bites
//que é o tamanho de um int e é o tipo do vector vec

//Se o programa correr em outro computador, os endereços serão diferentes
// porque o computador é que seleciona o espaço da memoria logo seria diferente, 
// mas o incremento seria na mesma de 4 bites

}

return 0;
}
