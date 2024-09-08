#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    double raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2);

    printf("AREA = %.3lf",area);

}
