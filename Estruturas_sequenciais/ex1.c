#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int farenheit;
    float celsius;

    printf("Digite a temperaturam em farenheit: \n");
    scanf("%d", &farenheit);

    celsius = 5 * (farenheit - 32) / 9;

    printf("A temperatura em celsius e %.2f\n", celsius);
    
    system("pause");
    return 0;
}