#include <stdio.h>
int main(){
    double salario, novo_salario, aumento;
    int porcentagem;
    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000.00){
        porcentagem = 20;
        novo_salario = salario + ((salario * porcentagem)/ 100);
        aumento = novo_salario - salario;

    }else if (salario <= 3000.00){
        porcentagem = 15;
        novo_salario = salario + ((salario * porcentagem)/ 100);
        aumento = novo_salario - salario;
    }else if(salario <= 8000.00){
        porcentagem = 10;
        novo_salario = salario + ((salario * porcentagem)/ 100);
        aumento = novo_salario - salario;
    }else{
        porcentagem = 5;
        novo_salario = salario + ((salario * porcentagem)/ 100);
        aumento = novo_salario - salario;
    }
    printf("Novo salario = R$ %.2lf\nAumento = R$ %.2lf\nPorcentagem = %d%%",novo_salario, aumento, porcentagem);
    return 0;

}

