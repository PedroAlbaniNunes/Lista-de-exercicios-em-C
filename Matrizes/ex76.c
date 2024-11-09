/*Elabore uma função com assinatura int busca(float M[MAX][MAX], int n_lin, int n_col
,→ , float v, int *lin, int *col) que retorna nas variáveis lin e col, respectivamente, a
linha e coluna em que se encontra do valor v ma matriz (caso aja algum). Em não havendo,
a função deve retornar −1 ao final, caso contrário, retornar qualquer valor diferente de −1.
No caso de valores repetidos, sua função deve retornar o primeiro encontrado considerando o
percorrimento de linhas e colunas no sentido raster.

Create a function with signature int search(float M[MAX][MAX], int n_lin, int n_col
,→ , float v, int *lin, int *col) which returns in the variables lin and col, respectively, the
row and column in which the value is found in the matrix (if any). If not,
the function must return −1 at the end, otherwise return any value other than −1.
In the case of repeated values, your function must return the first one found considering the
traversing rows and columns in raster direction.
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int busca(float M[MAX][MAX], int n_lin, int n_col, float v, int *lin, int *col)
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (M[i][j] == v)
            {
                *lin = i + 1;
                *col = j + 1;
                return 0;
            }
        }
    }
    return -1;
}
int main()
{
    int n_lin = MAX;
    int n_col = MAX;
    float v;

    printf("Enter the value that you want to search on the matrix: ");
    scanf("%f", &v);

    float M[MAX][MAX] =
    {
        {1.1, 1.2, 1.3},
        {2.1, 2.2, 2.3},
        {3.1, 3.2, 3.3}
    };
    int lin, col;
    int index = busca(M, n_lin, n_col, v, &lin, &col);
    if (index == 0)
    {
        printf("The value %.1f is found in the position: [%d][%d].\n", v, lin, col);
    }
    else
    {
        printf("Value %.1f not found. \n", v);
    }

    system("pause");
    return 0;

}