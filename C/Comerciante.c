#include <stdio.h>


 void limpar_entrada() {
     char c;
     while ((c = getchar()) != '\n' && c != EOF) {}
 }
 void ler_texto(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
 }

 int main(){
     int n, abaixo, entre, acima;
     printf("Serao digitados dados de quantos produtos? ");
     scanf("%d", &n);

     char nome[n][30];
     double p_compra[n], p_venda[n], porcentagem[n];
     double total, venda, compra;

     abaixo = 0;
     entre = 0;
     acima = 0;

     for (int i = 0; i < n; i++){
        printf("Produto %d:\nNome: ", i+1);
        limpar_entrada();
        ler_texto(nome[i],30);
        printf("Preco de compra: ");
        scanf("%lf", &p_compra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &p_venda[i]);
     }
     for (int i=0; i<n; i++) {
        porcentagem[i] = (p_venda[i] - p_compra[i]) / p_compra[i] * 100.0;
    }
     for (int i=0; i<n; i++) {
        if (porcentagem[i] < 10) {
            abaixo++;
        }
        else if (porcentagem[i] < 20) {
            entre++;
        }
        else {
            acima++;
        }
    }
     compra = 0;
     venda = 0;
     for (int i=0; i<n; i++) {
         compra = compra + p_compra[i];
         venda = venda + p_venda[i];
     }
     total = venda - compra;

     printf("\nRELATORIO:\nLucro abaixo de 10%%: %d\nLucro entre 10%% e 20%%: %d\nLucro acima de 20%%: %d\nValor total de compra: %.2lf\nValor total de venda: %.2lf\nLucro total: %.2lf\n",abaixo, entre, acima, compra, venda, total);
 }
