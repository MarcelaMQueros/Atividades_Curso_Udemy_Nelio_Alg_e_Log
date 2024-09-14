#include <stdio.h>

int main(){
    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    while (x != y) {
        (x < y) ? printf("CRESCENTE\n") : printf("DECRESCENTE\n");
        printf("Digite outros dois numeros:\n");
        scanf("%d %d", &x, &y);
    }
    return 0;
}
