#include <stdio.h >
#include <math.h>



int main(){

double x1, x2, a,b,c, delta;

printf("Coeficiente a: ");
scanf("%lf",&a);

printf("Coeficiente b: ");
scanf("%lf",&b);

printf("Coeficiente c: ");
scanf("%lf",&c);

delta = pow(b,2) - (4 * a * c);

(delta < 0) ? printf("Esta equacao nao possui raizes reais \n") : (x1 = (-b + sqrt(delta)) / (2 * a), x2 = (-b - sqrt(delta)) / (2 * a), printf("X1 = %.4lf\nX2 = %.4lf\n", x1, x2));



}
