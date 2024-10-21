#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y;

    printf("Digite os valores de X e Y respectivamente: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("X = %d e Y = %d \n", x,y);
    system("pause");
    return 0;
}