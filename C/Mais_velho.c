#include <stdio.h>

 int main(){
     int n;
     printf("Quantas pessoas voce vai digitar? ");
     scanf("%d", &n);
     char nome[n][50];
     int idade [n];
     int mais_velho, posicao;



     for (int i = 0; i < n; i++){
        printf("Dados da %da pessoa:\nNome: ", i+1);
        scanf("%s", &nome[i][0]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
     }
     mais_velho = 0;
     for (int i = 0; i < n; i++){
            if (idade[i]>mais_velho){
                mais_velho = idade[i];
                posicao = i;
            }
     }
     printf("PESSOA MAIS VELHA: %s\n", nome[posicao]);

     return 0;

 }
