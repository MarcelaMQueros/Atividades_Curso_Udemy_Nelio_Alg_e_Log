#include <stdio.h>

int main(){

    int minutos_utilizados;
    double valor_pagar;
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos_utilizados);
    minutos_utilizados = minutos_utilizados - 100;

    (minutos_utilizados <= 0) ? (valor_pagar = 50.00) : (valor_pagar = ((minutos_utilizados * 2.00) + 50.00));
    printf("Valor a pagar: R$ %.2lf", valor_pagar);

    return 0;
}
