#include <stdio.h>

int main(void){
int x, *p;
x = 100;
p = &x;  /* Deve-se atribuir ao ponteiro o endereço da variavel, para isso utiliza-se o simbolo "&"*/
printf("Valor de p = %p\tValor de *p = %d", p, *p);

}
