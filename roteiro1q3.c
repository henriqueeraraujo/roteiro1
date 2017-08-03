#include <stdio.h>

int main(void){

    int n, maior = 0;

    while(1){
            printf("digite um numero: ");
            scanf("%d", &n);

            if(n == 0){
                break;
            }

            if(n > maior){
                maior = n;
            }
    }

    printf("\n\tMaior valor inserido : %d\n", maior);

    return 0;
}
