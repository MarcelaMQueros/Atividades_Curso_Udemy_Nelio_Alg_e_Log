#include <stdio.h>
int main(){
    int n,x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x == 0){
            printf("NULO\n");
        }else if (x % 2 == 0){
            if (x < 0){
                printf("PAR NEGATIVO\n");
            }else{
                printf("PAR POSITIVO\n");
            }
        }else{
            if (x < 0){
                printf("IMPAR NEGATIVO\n");
            }else{
                printf("IMPAR POSITIVO\n");
            }
        }
    }
    return 0;
}
