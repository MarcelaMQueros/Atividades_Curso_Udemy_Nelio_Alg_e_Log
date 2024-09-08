#include <stdio.h>
#include <string.h>

int main(){
    char nome[40];
    double pagamento, valor_hora;
    int horas_trabalhadas;

    printf("Nome: ");
    gets(nome);
    fseek(stdin,0, SEEK_END);

    printf("Valor por hora: ");
    scanf("%lf", &valor_hora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    pagamento = horas_trabalhadas * valor_hora;
    printf("O pagamento para %s deve ser de %.2lf\n", nome, pagamento);





}
