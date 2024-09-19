#include <stdio.h>
int main(){
    int n, cont;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\nNUMEROS PARES:\n");
    cont = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            cont++;
        }
    }
    printf("\nQUANTIDADE DE PARES = %d\n", cont);
    return 0;
}
