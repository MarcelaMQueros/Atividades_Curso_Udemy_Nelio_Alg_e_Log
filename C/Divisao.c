#include <stdio.h>
int main(){
    int n, num,den;
    double divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Entre com o numerador: ");
        scanf("%d", &num);

        printf("Entre com o denominador: ");
        scanf("%d", &den);

        if (den == 0){
            printf("DIVISAO IMPOSSIVEL");
        }else{
            divisao = (double) num / den;
            printf("Divisao = %.2lf\n", divisao);
        }
    }
     return 0;
    }


