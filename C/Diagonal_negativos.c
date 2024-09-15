#include <stdio.h>

int main(){
    int n, cont;
    printf("Qual a ordem da Matriz? ");
    scanf("%d", &n);

    int elemento[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &elemento[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                printf("%d ",elemento[i][j]);
            }
        }
    }
    cont = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (elemento[i][j] < 0){
                cont++;
            }
        }
    }
    printf("\nQuantidade de negativos = %d ",cont);



}
