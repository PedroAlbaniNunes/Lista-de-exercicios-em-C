/*Faça uma função que receba duas matrizes m × m (m é inteiro lido do teclado) e informe se elas
são iguais.
Write a function that receives two m × m matrices (m is an integer read from the keyboard) and informs whether they
are the same.
*/

#include <stdio.h>
#include <stdlib.h>


void compare_matrix(int matrix[3][3], int matrix2[4][4])
{
    if (sizeof(matrix[0]) == sizeof(matrix2[0]))
    {
        printf("Equals. \n");
    }
    else
    {
        printf("Diferents. \n");
    }
}

int main()
{
    int matrix[3][3] =
         {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
    int matrix2[4][4] = 
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

    compare_matrix(matrix, matrix2);

    system("pause");
    return 0;
}