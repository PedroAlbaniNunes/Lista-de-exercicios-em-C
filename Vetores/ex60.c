/*Leia um conjunto de valores reais armazenando-os em um vetor. O final da leitura deve ocorrer
quando um valor negativo for dado como entrada. Em seguida, calcule a média do vetor e
mostre-a na tela. Na linha seguinte, imprima todos elementos maiores que a média.

Read a set of real values ​​by storing them in a vector. The end of the reading must occur
when a negative value is given as input. Then calculate the mean of the vector and
show it on the screen. On the next line, print all elements larger than average. */



#include <stdio.h>
#include <stdlib.h>

#define MAX 100

float sum_vector(float vector[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vector[i];
    }
    return sum;
}

float avarage_vector(float vector[], int n)
{
    return sum_vector(vector, n) / n;
}

int main()
{
    int n = 0;
    float number, vector[MAX];

    while (1)
    {
        printf("Write one value %d: \n", n + 1);
        scanf("%f", &number);

        if (number < 0)
        {
            break;
        }
        if (n < MAX)
        {
            vector[n] = number;
            n++;
        }
        else
        {
            printf("Limite de valores atingido. ");
            break;
        }
    }

    printf("The sum of the values is: %.2f.\n", sum_vector(vector, n));
    printf("The averege of the values is: %.2f.\n", avarage_vector(vector, n));

    system("pause");
    return 0;
}