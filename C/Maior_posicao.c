#include <stdio.h>
int main(){
    int n, posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    double vet[n];

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    maior = 0;
    posicao = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\nPOSICAO DO MAIOR VALOR = %d", maior, posicao);
    return 0;
}
