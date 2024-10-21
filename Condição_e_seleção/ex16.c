#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int cod, int amount)
{
    float price;

    if (cod == 1001)
    {
        price = amount * 5.32;
        printf("The price to be paid is %.2f", price);
    }
    else if (cod == 1324)
    {
        price = amount * 6.45;
        printf("The price to be paid is %.2f", price);
    }
    else if (cod == 6548)
    {
        price = amount * 2.37;
        printf("The price to be paid is %.2f", price);
    }
    else if (cod == 987)
    {
        price = amount * 5.32;
        printf("The price to be paid is %.2f", price);
    }
    else if (cod == 7623)
    {
        price = amount * 6.45;
        printf("The price to be paid is %.2f", price);
    }
    else 
    {
        printf("Invalid code. \n");
    }

    system("pause");
    return 0;
}