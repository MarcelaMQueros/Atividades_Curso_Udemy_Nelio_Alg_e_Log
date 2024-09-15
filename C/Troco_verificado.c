#include <stdio.h>

int main(){
     double preco, dinheiro_recebido, troco;
     int quantidade;

     printf("Preço unitario do produto: ");
     scanf("%lf", &preco);
     printf("Quantidade comprada: ");
     scanf("%d", &quantidade);
     printf("Dinheiro recebido: ");
     scanf("%lf", &dinheiro_recebido);

     preco = preco * quantidade;
     troco = dinheiro_recebido - preco;
     (troco >= 0) ? (printf("TROCO: %.2lf ", troco)) : (printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", -(troco)));



}
