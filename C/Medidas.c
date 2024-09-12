#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c, areaQ, areaT, areaTP;


    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQ = pow(a,2);
    areaT = (a * b) / 2;
    areaTP = ((a + b) * c) / 2;

    printf("AREA DO QUADRADO = %.4lf\nAREA DO TRIANGULO = %.4lf\nAREA DO TRAPEZIO = %.4lf", areaQ, areaT, areaTP);

    return 0;

}
