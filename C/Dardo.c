#include <stdio.h>

int main(){
    double a,b,c, maior;
    printf("Digite as tres distancias:\n");
    scanf("%lf\n%lf\n%lf", &a,&b,&c);

    if (a > b && a > c) {
        maior = a;
    }else if (b > c){
        maior = b;
    }else{
        maior = c;
    }
    printf("MAIOR DISTANCIA = %.2lf", maior);

return 0;
}
