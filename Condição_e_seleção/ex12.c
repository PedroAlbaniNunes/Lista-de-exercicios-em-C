#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float nota1, nota2, nota3, nota_media;

    printf("Escreva a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Escreva a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Escreva a terceira nota: \n");
    scanf("%f", &nota3);

    nota_media = (nota1 + nota2 + nota3) / 3;

    if (nota_media < 5){
        printf("Reprovado \n");
    } else if (nota_media >= 7){
        printf("Aprovado \n");
    } else if ((nota_media >= 5) && (nota_media < 7)){
        printf("Recuperacao \n");
    }

    system("pause");
    return 0;
}