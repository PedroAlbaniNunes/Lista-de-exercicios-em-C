#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int total_consumption, cubic_meters, consumption1, consumption2;
    float tax, water_bill, sewage_tariff, water_tariff;

    printf("Write the water consumption of last month. \n");
    scanf("%i", &consumption1);

    printf("Write the water consumption of that month. \n");
    scanf("%i", &consumption2);

    total_consumption = consumption1 + consumption2;

    printf("Write how many cubic meters does your residence have? \n");
    scanf("%i", &cubic_meters);

    if ((total_consumption >= 0) && (total_consumption <= 10))
    {
        water_tariff = total_consumption * 0.69;
        sewage_tariff = water_tariff * 0.025;
        water_bill = 5 + water_tariff + sewage_tariff;
        printf("The water bill is %.2f. \n", water_bill);
    }
    else if ((total_consumption >= 11) && (total_consumption <= 15))
    {
        water_tariff = total_consumption * 1.17;
        sewage_tariff = water_tariff * 0.025;
        water_bill = 5 + water_tariff + sewage_tariff;
        printf("The water bill is %.2f. \n", water_bill); 
    }
    else if ((total_consumption >= 16) && (total_consumption <= 25))
    {
        water_tariff = total_consumption * 1.48;
        sewage_tariff = water_tariff * 0.025;
        water_bill = 5 + water_tariff + sewage_tariff;
        printf("The water bill is %.2f. \n", water_bill); 
    }
    else if (total_consumption > 25)
    {
        water_tariff = total_consumption * 1.60;
        sewage_tariff = water_tariff * 0.025;
        water_bill = 5 + water_tariff + sewage_tariff;
        printf("The water bill is %.2f. \n", water_bill); 
    }

    system("pause");
    return 0;
}