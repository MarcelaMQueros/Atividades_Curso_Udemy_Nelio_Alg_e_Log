#include <stdio.h>
#include <string.h>


int main(){
    double preco, dinheiro_recebido, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("dinheiro_recebido: ");
    scanf("%lf", &dinheiro_recebido);

    troco = dinheiro_recebido - ((double)quantidade * preco);

    printf("TROCO = %.2lf", troco);

}
