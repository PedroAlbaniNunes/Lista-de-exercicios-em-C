#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float salario_bruto, prestacao_maxima;


    printf("Escreva seu salario bruto: \n");
    scanf("%f", &salario_bruto);

    prestacao_maxima = (salario_bruto * 30) / 100;

    printf("A prestacao maxima baseada no seu salario e %.2f\n", prestacao_maxima);
    system("pause");
    return 0;

}