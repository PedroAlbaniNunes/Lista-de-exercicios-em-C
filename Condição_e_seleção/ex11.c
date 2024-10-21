#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, comissao, vendas;

    printf("Escreva as vendas brutas desse mes. \n");
    scanf("%f", &vendas);

    comissao = 0.09 * vendas;

    if ((vendas > 0) && (vendas <= 1000)){
        salario = comissao + 200;
    } else if (vendas == 0){
        salario = 200;
    } else if (vendas > 1000){
        salario = 1000 + comissao;
    }

    printf("Salario igual a %.2f \n", salario);
    system("pause");
    return 0;
}