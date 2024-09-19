
#include <stdio.h>
int main(){
    int n;
    double a,b,c,media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
    printf("Digite tres numeros:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a * 2.0 + b * 3.0 + c * 5.0) / 10.0;
    printf("MEDIA = %.1lf\n", media);
    }

    return 0;
}
