#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    char nome1[40], nome2[40];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \nNome: ");
    ler_texto(nome1, 40);
    printf("Idade: ");
    scanf("%d", &idade1);
    limpar_entrada();

    //outra forma � fseek(stdin,0, SEEK_END); gets(nome1);

    printf("Dados da segunda pessoa: \nNome: ");
    ler_texto(nome2, 40);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade media de Maria Silva e Joao Melo e de %.1lf anos", media);
}
