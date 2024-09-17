#include <stdio.h>
int main(){
    int tentativa, senha;
    senha = 2002;
    printf("Digite a senha: ");
    scanf("%d", &tentativa);

    while (senha != tentativa){
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &tentativa);
    }
    printf("Acesso permitido!");
    return 0;
}
