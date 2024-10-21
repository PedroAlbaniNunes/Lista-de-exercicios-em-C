#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float nota1, nota2, nota3, nota_media;

    printf("Digite as notas, nota1, nota2 e nota3, respectivamente: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    nota_media = (nota1 + nota2 + nota3) / 3;

    printf("A nota media do aluno foi %.2f \n", nota_media);
    
    system("pause");
    return 0;
}