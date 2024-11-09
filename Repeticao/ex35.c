/*Faça um programa que leia um valor n indicando a quantidade de valores a ler em seguida. Um
número deve ser lido por vez e seu programa deve classificá-lo como positivo ou negativo.

Write a program that reads a value n indicating the number of values ​​to read next. One
number must be read at a time and your program must classify it as positive or negative.*/

#include <stdio.h>
#include <stdlib.h>

const char* is_odd(int n)
{
    if (n % 2 == 0)
    {
        return "is odd.";
    }
    else
    {
        return "is not odd.";
    }
}
int main()
{
    int n, number;

    printf("Write how much numbers will be readen: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error. \n");
        system("pause");
        return 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Write the value to be analyzed: \n");
            scanf("%d", &number);
            printf("The number %i %s. \n", number, is_odd(number));
        }
    }
    system("pause");
    return 0;
}