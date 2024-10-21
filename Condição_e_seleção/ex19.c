#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int x)
{
    float result;
    if (x <= 1)
    {
        result = 1;
    }
    else if ((x > 1) && (x <= 2))
    {
        result = x;
    }
    else if ((x > 2) && (x <=3))
    {
        result = pow(x,2);
    }
    else if (x > 3)
    {
        result = pow(x, 3);
    }
    printf("The value of X is %.2f", result);

    system("pause");
    return 0;
}