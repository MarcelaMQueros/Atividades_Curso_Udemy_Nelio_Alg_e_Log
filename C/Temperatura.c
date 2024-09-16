#include <stdio.h>
int main(){
    double temperatura, temperatura_convertida;
    char escala;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temperatura);
        temperatura_convertida = 5.00 / 9.00*(temperatura - 32);
        printf("Temperatura equivalente em Celsius: %.2lf", temperatura_convertida);
    }else{
        printf("Digite a temperatura em  Celsius: ");
        scanf("%lf", &temperatura);
        temperatura_convertida = temperatura * 9 / 5 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", temperatura_convertida);
    }
}

