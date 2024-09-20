#include <stdio.h>

 int main(){
     int n;
     printf("Quantos valores vai ter cada vetor? ");
     scanf("%d", &n);

     double a[n];
     double media;
     media = 0;

     for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &a[i]);
        media = media + a[i];
     }

     media = media / n;
     printf("MEDIA DO VETOR = %.3lf\n", media);
     printf("ELEMENTOS ABAIXO DA MEDIA:\n");

     for (int i = 0; i < n; i++){
            if (a[i] < media){
                printf("%.1lf\n", a[i]);
            }
     }

 }
