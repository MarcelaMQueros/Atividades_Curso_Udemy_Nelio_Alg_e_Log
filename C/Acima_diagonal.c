
int main(){
    int n;
    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);

    int a[n][n];
    int soma;

    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &a[i][j]);
            }
    }
    soma = 0;

    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                    if(i < j){
                        soma = soma + a[i][j];
                    }
            }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}
