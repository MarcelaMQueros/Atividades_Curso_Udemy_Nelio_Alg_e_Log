#include <stdio.h>

int main(){
    int n, numero_homens;
        printf("Quantas pessoas serao digitadas? ");
        scanf("%d", &n);

        double altura[n];
        char genero[n];
        double maior, menor, media;

        for (int i = 0; i < n; i++){
                printf("Altura da %da pessoa:", i+1);
                scanf("%lf", &altura[i]);

                printf("Genero da %da pessoa:", i+1);
                scanf(" %c", &genero[i]);
        }
        menor = altura[0];
        maior = altura[0];
        media = 0;
        numero_homens = 0;
        for (int i = 0; i < n; i++){
                if(altura[i] < menor){
                    menor = altura[i];
                }

                if (altura[i] > maior){
                    maior = altura[i];
                }

                if (genero[i] == 'M'){
                    numero_homens++;

                } else {
                    media += altura[i];
                }
        }
        media = media / (n - numero_homens);
        printf("Menor altura = %.2lf \nMaior altura = %.2lf \nMedia das alturas das mulheres = %.2lf \nNumero de homens = %d",menor, maior, media, numero_homens);

}
