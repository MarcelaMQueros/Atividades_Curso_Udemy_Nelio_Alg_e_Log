int main(){
    int n;
    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);

    double a[n][n];
    double soma_positivo;
    int l,c;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > 0){
                soma_positivo += a[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n\n", soma_positivo);

    printf("\nEscolha uma linha: ");
    scanf("%d", &l);
    printf("\nLINHA ESCOLHIDA: ");
    for (int i=0; i<n; i++) {
        printf("%.1lf ", a[l][i]);
    }

    printf("\nEscolha uma coluna: ");
    scanf("%d", &c);
    printf("\nCOLUNA ESCOLHIDA: ");
    for (int i=0; i<n; i++) {
        printf("%.1lf ", a[i][c]);
    }

    printf("\nDIAGONAL PRINCIPAL: ");
    for (int i = 0; i < n; i++){
        printf("%.1lf ", a[i][i]);

    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] < 0) {
                a[i][j] = pow(a[i][j], 2);
            }
        }
    }

	printf("\n\nMATRIZ ALTERADA:\n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%.1lf ", a[i][j]);
        }
		printf("\n");
    }

    return 0;
}
