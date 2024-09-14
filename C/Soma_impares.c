#include <stdio.h>

int main(){

 int x, y,i, soma, troca;
 printf("Digite 2 numeros:\n");
 scanf("%d\n%d", &x, &y);
 soma = 0;

 if (x > y){
    troca = x;
    x = y;
    y = troca;
 }


 for (i = x+1; i < y; i++){
    if (i % 2 != 0){
        soma = soma + i;
    }
 }
printf("Soma dos Impares = %d", soma);
return 0;
}
