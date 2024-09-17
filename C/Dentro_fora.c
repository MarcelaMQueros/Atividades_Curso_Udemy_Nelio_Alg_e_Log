#include <stdio.h>
int main(){
    int n,x, dentro,fora;
    dentro = 0;
    fora = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

        (x > 9 && x < 21) ? dentro++ : fora++;
    }
    printf("%d DENTRO\n%d FORA", dentro, fora);
    return 0;
}
