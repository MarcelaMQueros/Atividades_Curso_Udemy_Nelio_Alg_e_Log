#include <stdio.h>

 int main(){
     int n;
     printf("Quantos elementos vai ter o vetor? ");
     scanf("%d", &n);

     int a[n];
     double media, cont;
     media = 0;
     cont = 0;

     for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0){
            media = media + a[i];
            cont++;
        }
     }
     media = media / cont;

     if (cont == 0){
        printf("NENHUM NUMERO PAR");
     }else{
        printf("MEDIA DOS PARES = %.1lf", media);
     }
    return 0;
 }
