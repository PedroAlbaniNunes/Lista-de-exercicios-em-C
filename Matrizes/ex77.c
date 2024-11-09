/*Faça uma função em C que receba uma matriz 3 × 3, calcule seu determinante e ao final mostre
na tela o valor resultante.


int calcular_determinante(int matriz[3][3]) {
// Sua implementação aqui
}
int main() {
int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int determinante = calcular_determinante(matriz);
printf("O determinante da matriz é: %d\n", determinante);
return 0;
}

Write a function in C that receives a 3 × 3 matrix, calculates its determinant and at the end shows
the resulting value on the screen

*/

#include <stdio.h>
#include <stdlib.h>


int calcular_determinante(int matriz[3][3]) {
    int total, sum, sub;
    sum = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[0][2]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]));
    sub = ((matriz[0][1] * matriz[1][0] * matriz[2][2]) - (matriz[0][0] * matriz[1][2] * matriz[2][1]) - (matriz[0][2] * matriz[1][1] * matriz[2][0]));
    total = sum + sub;
    return total;    
}



int main() {
    int matriz[3][3] = 
    {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };


    int determinante = calcular_determinante(matriz);


    printf("O determinante da matriz e: %d\n", determinante);

    return 0;
}