#include <stdio.h>
int main(){
    int x, y, troca;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d\n%d", &x, &y);

    if (x < y) {
        troca = x;
        x = y;
        y = troca;
    }
    if (x % y == 0){
        printf("Sao multiplos ");
    } else{
        printf("Nao sao multiplos");
    }
}

