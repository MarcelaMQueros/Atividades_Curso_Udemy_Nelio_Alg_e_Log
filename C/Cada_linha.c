#include <stdio.h>

int main(){
    int n, maior;
    printf("Qual a ordem matriz? ");
    scanf("%d",&n);;
    int mat[n][n], maiorlinha[n];

    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                    printf("Elemento [%d,%d]: ", i, j);
                    scanf("%d", &mat[i][j]);
            }
    }


    for (int i = 0; i < n; i++){
            maior = mat[i][0];
            for (int j = 0; j < n; j++){
                    if (mat[i][j] > maior){
                        maior = mat[i][j];
                    }
            maiorlinha[i] = maior;
            }
    }
    printf("MAIOR ELEMENTO DE CADA LINHA:\n");
    for (int i=0; i<n; i++) {
		printf("%d\n", maiorlinha[i]);
    }

    return 0;
}

