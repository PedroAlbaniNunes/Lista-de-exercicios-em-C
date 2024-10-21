#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int side1, side2, side3;

    printf("Write the Side1 of the triangle: \n");
    scanf("%i", &side1);

    printf("Write the Side2 of the triangle: \n");
    scanf("%i", &side2);

    printf("Write the Side3 of the triangle: \n");
    scanf("%i", &side3);

    if ((side1 <= 0) || (side2 <=0) || (side3 <=0))
    {
        printf("The side values are egual or below 0. \n");
    }
    else if ((side1 + side2 < side3) || (side2 + side3 < side1) || (side3 + side1 < side2))
    {
        printf("The sum of two sides of the triangle are less than the other side. \n");
    }
    else if ((side1 == side2) && (side2 == side3))
    {
        printf("It's a equilateral triangle. \n");
    }
    else if ((side1 != side2) && (side2 != side3) && (side3 != side1))
    {
        printf("It's a scalene triangle. \n");
    }
    else 
    {
        printf("It's a isoceles triangle. \n");
    }

    system("pause");
    return 0;
}