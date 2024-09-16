#include <stdio.h>
int main(){
    int hora_inicial, hora_final;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);
    printf("Hora final: ");
    scanf("%d", &hora_final);

    if (hora_inicial < hora_final){
        hora_final = hora_final - hora_inicial;
        printf("O JOGO DUROU %d HORAS(S)", hora_final);
    }else{
        hora_final = 24 - (hora_inicial - hora_final);
        printf("O JOGO DUROU %d HORAS(S)", hora_final);
    }
    return 0;
}
