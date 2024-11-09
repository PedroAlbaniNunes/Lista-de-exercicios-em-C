/*Implemente um programa que leia os elementos de um vetor de valores reais e mostre a soma e
a média dos seus valores na tela.

Implement a program that reads the elements of a vector of real values ​​and displays the sum and
the average of your values ​​on the screen.*/
#include <stdio.h>
#include <stdlib.h>

float sum_vector(float vector[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vector[i];
    }
    return sum;
}

float average_vector(float vector[], int n)
{
    return sum_vector(vector, n) / n;
}


int main()
{
    int n;
    float number, sum, average;

    printf("Write the lenght of the vector: ");
    scanf("%d", &n);

    float* vector = (float*)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) 
    {
        printf("Write the %d number of the vector: \n", i+1);
        scanf("%f", &number);
        vector[i] = number;
    }
    printf("The sum of the values is %.2f. \n", sum_vector(vector, n));
    printf("The average of the values is %.2f. \n", average_vector(vector,n));

    system("pauser");
    return 0;
}