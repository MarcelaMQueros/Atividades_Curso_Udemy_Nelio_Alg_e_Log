int main(){
    int m,n;
    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d",&m);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d",&n);
    int a[m][n],b[m][n], soma[m][n];

    printf("Digite os valores da matriz A:\n");
    for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &a[i][j]);
            }
    }
    printf("Digite os valores da matriz B:\n");
    for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &b[i][j]);
            }
    }
    printf("MATRIZ SOMA:  ");
    for (int i = 0; i < m; i++){
            printf("\n");
            for (int j = 0; j < n; j++){
                    soma[i][j] = a[i][j] + b[i][j];
                    printf("%d ", soma[i][j]);

            }
    }
    return 0;
}
