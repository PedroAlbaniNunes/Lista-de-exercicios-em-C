#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;

    printf("Digite um numero inteiro positivo. \n");
    scanf("%i", &num1);

    if (num1 % 2 != 0){
        printf("Impar \n");
    } else {
        printf("Par \n");
    }
    system("pause");
    return 0;
}