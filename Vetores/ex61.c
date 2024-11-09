/*Faça um programa que leia um caractere c, e, em seguida, n posições de um vetor de caracteres.
Seu programa deverá imprimir todos os índices em que forem encontrados c no vetor.


Write a program that reads a character c, and then n positions from a character vector.
Your program should print all indices where c are found in the vector.'*/



#include <stdio.h>
void encontre_indices(char vetor[], int tamanho, char c)
{
    char indices[tamanho];
    printf("O caractere foi encontrado nos indices: \n");
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == c)
        {
            indices[i] = i; 
            printf("%d ", indices[i]);
        }
    }
}



int main()
{
    char c;
    int n;

    printf("Digite o caractere a ser procurado (c): ");
    scanf(" %c", &c);

    printf("Digite o tamanho do vetor (n): ");
    scanf("%d", &n);

    char vetor[n];

    printf("Digite os caracteres do vetor (separados por espaco ou enter):\n");
    for (int i = 0; i < n; i++)
        {
    scanf(" %c", &vetor[i]);
    }
    encontre_indices(vetor, n, c);
    return 0;
}