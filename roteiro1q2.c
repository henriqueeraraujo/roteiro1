#include <stdio.h>

int main(void){

    double salarioBruto, descontoDoINSS, salarioLiquido;

    printf("Qual o seu salario?: ");
    scanf("%lf", &salarioBruto);

    if(salarioBruto <= 420){
        descontoDoINSS = salarioBruto * 0.08;
        salarioLiquido = salarioBruto - descontoDoINSS;
    }
    if(salarioBruto > 420 && salarioBruto <= 1350){
        descontoDoINSS = salarioBruto * 0.09;
        salarioLiquido = salarioBruto - descontoDoINSS;
    }
    if(salarioBruto > 1350){
        descontoDoINSS = salarioBruto * 0.1;
        salarioLiquido = salarioBruto - descontoDoINSS;
    }

        printf("\n\tSalario Bruto: %0.2lf\n", salarioBruto);
        printf("\tDesconto do INSS: %0.2lf\n", descontoDoINSS);
        printf("\tSalario Liquido: %0.2lf\n", salarioLiquido);

    return 0;
}
