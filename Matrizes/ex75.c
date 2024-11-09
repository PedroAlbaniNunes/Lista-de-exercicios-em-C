/*Escreva uma função que recebe uma matriz do tipo float e retorne (via parâmetro) a matriz
normalizada resultante da divisão da matriz original pelo seu maior valor.

Write a function that receives an array of type float and returns (via parameter) the array
normalized value resulting from dividing the original matrix by its largest value.
*/


#include <stdio.h>
#include <stdlib.h>
#define MIN -10000000
#define SIZE  3

float greater_value(float matrix[3][3], int m)
{   
    float aux = MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > aux)
            {
            aux = matrix[i][j];
            }
        }
    }
    return aux;
}

float change_values(float matrix[3][3], int m, int i, int j)
{
    float max_value = greater_value(matrix, m);
    return matrix[i][j] / max_value;
}

int main()
{   
    int m = SIZE;
    float matrix[SIZE][SIZE] =
    {
        {1.1, 1.2, 1.3},
        {2.1, 2.2, 2.3},
        {3.1, 3.2, 3.3}
    };
    float matrix2[SIZE][SIZE];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix2[i][j] = change_values(matrix, m, i, j);
        }
    } 
    printf("New matrix %dx%d. \n", m,m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.2f    ", matrix2[i][j]);
        }
        printf("\n");
    } 
    system("pause");
    return 0;

}