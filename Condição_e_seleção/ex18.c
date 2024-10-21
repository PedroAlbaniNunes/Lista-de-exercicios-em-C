#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(float weight, int num)
{
    float relative_weight;

    if (num == 1)
    {
        relative_weight = weight * 0.37;
    }
    else if (num == 2)
    {
        relative_weight = weight * 0.88;
    }
    else if (num == 3)
    {
        relative_weight = weight * 0.38;
    }
    else if (num == 4)
    {
        relative_weight = weight * 2.64;
    }
    else if (num == 5)
    {
        relative_weight = weight * 1.15;
    }
    else if (num == 6)
    {
        relative_weight = weight * 1.17;
    }
    printf("The relative weight is %.2f. \n", relative_weight);

    system("pause");
    return 0;
}