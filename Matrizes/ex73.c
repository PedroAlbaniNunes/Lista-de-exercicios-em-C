/*Faça um programa que leia uma matriz m × m (m é inteiro lido do teclado), preencha com 1’s a
diagonal principal e com 0’s os demais elementos (matriz identidade). A matriz deve ser impressa
na tela ao final da execução.

Create a program that reads an m × m matrix (m is an integer read from the keyboard), fill it with 1’s
main diagonal and the other elements with 0’s (identity matrix). The matrix must be printed
on the screen at the end of the execution.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    printf("Enter the lenght of the square matrix: ");
    scanf("%d", &m);

    int matrix[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == i)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    printf("Matrix %dx%d \n", m,m);
    for (int a = 0; a < m; a ++)
    {
        for (int b = 0; b < m; b++)
        {
            printf("%d   ", matrix[a][b]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}