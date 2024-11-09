/*Desenvolva um programa que leia dois valores a e b (a ≤ b) e mostre os seguintes resultados: (i)
todos os valores em [a, b]; todos os valores ímpares em [a, b]; (iii) todos os valores ímpares em
[a, b] e múltiplos de 3.

Develop a program that reads two values ​​a and b (a ≤ b) and shows the following results: (i)
all values ​​in [a, b]; all odd values ​​in [a, b]; (iii) all odd values ​​in
[a, b] and multiples of 3.*/

#include <stdio.h>
#include <stdlib.h>

const char* is_odd(int a)
{

    if (a % 2 == 1)
    {
        return "is odd ";
    }
    else
    {
        return "is pair";
    }
}
const char* divisible_by_three(int a)
{
    if (a == 1)
    {
        return "is not divisible by three";
    }
    else if (a == 0)
    {
        return "is not divisible by three";
    }
    else if (a % 3 == 0)
    {
        return "is divisible by three";
    }
    else
    {
        return "is not divisible by three";
    }
}

int main()
{
    int a,b;
    printf("Write the value of A: ");
    scanf("%d", &a);

    printf("Write the value of B: ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("Error");
        system("pause");
        return 1;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            printf("The value of I is: %d. \n", i);
            printf("The number %d %s. \n",i,is_odd(i));
            printf("The number %d %s. \n",i,divisible_by_three(i));
        }
    }

    system("pause");
    return 0;
}