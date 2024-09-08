  #include <stdio.h>

  int main(){

    double combustivel, consumo;
    int distancia;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia );
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel );

    consumo = distancia / combustivel;
    printf("Consumo medio = %.3lf", consumo);

  }
