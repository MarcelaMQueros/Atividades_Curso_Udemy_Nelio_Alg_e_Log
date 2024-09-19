#include <stdio.h>
int main(){
    int n, total, tc,tr,ts, quant;
    char cobaia;
    double pc,pr,ps;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);
    tc = 0;
    tr = 0;
    ts = 0;

    for (int i = 0; i < n; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &quant);
        printf("Tipo de cobaia: ");
        scanf(" %c", &cobaia);

        if (cobaia == 'C') {
            tc = tc + quant;
        }
        else if (cobaia == 'R') {
            tr = tr + quant;
        }
        else {
            ts = ts + quant;
        }

    }
    total = tc + tr + ts;
    pc = ((double)tc/total) * 100;
    pr = ((double)tr/total) * 100;
    ps = ((double)ts/total) * 100;
    printf("RELATORIO FINAL: \nTotal: %d cobaias\nTotal de coelhos: %d \nTotal de ratos: %d \nTotal de sapos: %d", total,tc,tr,ts);
    printf("\nPercentual de coelhos: %.2lf \nPercentual de ratos: %.2lf \nPercentual de sapos: %.2lf", pc,pr,ps);
     return 0;
    }


