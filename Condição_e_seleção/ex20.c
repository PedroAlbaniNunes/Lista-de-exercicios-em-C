#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    double delta, raiz1, raiz2;

    printf("Digite os valores de A, B, C respectivamente: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    delta = pow(b,2) - (4 * a * c);
    if (delta < 0){
        printf("A equacao nao possui raizes reais.\n");
    }
    else if (delta == 0){
        printf("A equacao tem 1 raiz real. \n");
        raiz1 = (-b + sqrt(delta))/ (2 * a);
        raiz2 = (-b - sqrt(delta))/ (2 * a);
        if (raiz1 > 0){
            printf("O valor resultatente e 0 e %lf\n", raiz1);
        }
        else{
            printf("O valor resultatente e 0 e %lf\n", raiz2);
        }
    }
    else if (delta > 0){
        printf("A equacao tem 2 raizes reais. \n");
        raiz1 = (-b + sqrt(delta))/ (2 * a);
        raiz2 = (-b - sqrt(delta))/ (2 * a);
        printf("O valor resultante das raizes e %.2lf e %.2lf\n", raiz1, raiz2);
    }
    system("pause");
    return 0;
}