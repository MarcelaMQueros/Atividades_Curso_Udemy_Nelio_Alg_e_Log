#include <stdio.h>
#include <string.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double largura, comprimento, metro_quadrado, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    limpar_entrada();
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    limpar_entrada();
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metro_quadrado);

    area = largura * comprimento;
    preco = metro_quadrado * area;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n",preco);
    return 0;
}
