#include <stdio.h>

int main(void){

    int idade;
    double preco,novoPreco;

    printf("Qual a idade do cliente?: ");
    scanf("%d", &idade);
    printf("Qual o valor da compra?: ");
    scanf("%lf", &preco);

    if(idade <= 18){
        novoPreco = preco - (preco * 0.1);

    }else{
        novoPreco = preco - (preco * 0.2);

    }

    printf("\tPreco final: %0.2lf\n", novoPreco);
    printf("\tValor do desconto: %0.2lf\n", preco - novoPreco);

    return 0;
}
