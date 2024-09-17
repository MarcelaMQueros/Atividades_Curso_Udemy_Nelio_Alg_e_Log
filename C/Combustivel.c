#include <stdio.h>
int main(){
    int gasolina, alcool, diesel, codigo;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (codigo != 4){

        if (codigo == 1){
            alcool++;
        }else if (codigo == 2){
            gasolina++;
        }else if (codigo == 3){
            diesel++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d", alcool, gasolina, diesel);

    return 0;
}
