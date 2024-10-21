#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float celsius, farenheit;

    printf("Digite a temperatura em celsius: \n");
    scanf("%f", &celsius);

    farenheit = celsius * 1.8 + 32;

    printf("A temperatura em farenheit e %.2f\n", farenheit);

    system("pause");
    return 0;
}