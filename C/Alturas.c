#include <stdio.h>

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
int n, menos, porcentagem;
double media;
printf("Quantas pessoas serao digitadas? ");
scanf("%d", &n);

int idade[n];
double altura[n];
char nome[n][50];

for (int i = 0; i < n; i++){
    printf("Dados da %da pessoa:\nNome: ", i+1);
    limpar_entrada();
    ler_texto(nome[i],50);
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Altura: ");
    scanf("%lf", &altura[i]);
}

media = 0;
menos = 0;
for (int i = 0; i < n; i++){
    media = media + altura[i];
    if (idade[i] < 16){
        menos++;
    }
}
media = media / n;
porcentagem = ((double)menos/n) * 100;

printf("Altura media: %.2lf\n", media);
printf("Pessoas com menos de 16 anos: %.2lf%%\n", porcentagem);
for (int i = 0; i < n; i++){
    media = media + altura[i];
    if (idade[i] < 16){
        printf("%s", nome[i]);
    }
}
return 0;
}
