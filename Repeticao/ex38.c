/*Faca um programa que apresente na tela a tabela de conversão de graus Celsius para Fahrenheit
no intervalo de -100°C a 100°C com valores igualmente espaçados (5 em 5).

Write a program that displays a conversion table from Celsius to Fahrenheit on the screen
in the range of -100°C to 100°C with equally spaced values ​​(5 out of 5).*/


#include <stdio.h>
#include <stdlib.h>


float convert(int celsius)
{
    return ((celsius * 1.8) + 32);
}
int main()
{
    int celsius;

    celsius = -100;

    while (celsius < 100)
    {
        printf("Celsius --------------- fahrenheit \n");
        printf("  %d.00 ---------------    %.2f\n", celsius, convert(celsius));
        celsius += 5;
    }
    system("pause");
    return 0;
}