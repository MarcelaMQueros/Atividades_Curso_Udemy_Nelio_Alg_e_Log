#include <stdio.h>

int main(){
    int idade, cont;
    double soma , media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

     if (idade < 0) {
        printf("Impossivel calcular");
        }
     else {
        soma = 0;
        cont = 0;
        while (idade >= 0) {
        soma = soma + idade;
        cont++;
        scanf("%d", &idade);
        }
        media = soma / cont;

        printf("MEDIA = %.2lf\n", media);

     }
    return 0;
}
