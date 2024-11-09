/*Elabore um programa que leia um número de entrada (n) que indicará a quantidade de números
a serem lidos. Em seguida, leia n números (conforme o valor informado anteriormente) e imprima
o triplo de cada um.

Create a program that reads an input number (n) that will indicate the number of numbers
to be read. Then, read n numbers (according to the value previously entered) and print
triple each.*/




#include <stdio.h>
#include <stdlib.h>

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
            printf("Write a number for be multipied by 3. \n");
            scanf("%d", &number);
            printf("That number multiplied by 3 is: %d. \n", number*3);
        }
    }

    system("pause");
    return 0;
}