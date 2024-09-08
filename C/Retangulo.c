#include <stdio.h>
#include <string.h>
#include <math.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    limpar_entrada();

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = altura * base;
    perimetro = 2 * (altura + base);
    diagonal = sqrt(pow(altura,2) + pow(base, 2));

    printf("AREA = %.4lf \nPERIMETRO = %.4lf \nDIAGONAL = %.4lf", area, perimetro, diagonal);

}
