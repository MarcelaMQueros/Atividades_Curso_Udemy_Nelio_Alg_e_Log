#include <stdio.h>
int main(){
    int codigo, quantidade;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);


    switch (codigo) {
    case 1:
        valor = quantidade * 5.00;
        break;
    case 2:
        valor = quantidade * 3.50;
        break;
    case 3:
        valor = quantidade * 4.80;
        break;
    case 4:
        valor = quantidade * 8.90;
        break;
    case 5:
        valor = quantidade * 7.32;
        break;
    default:
        break;
    }
    printf("Valor a pagar: R$ %.2lf", valor);

    return 0;

}

