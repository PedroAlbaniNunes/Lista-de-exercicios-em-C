#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float MB, Mbs, Mbps, segundos, minutos;

    printf("Digite respectivamente o tamanho do arquivo, em MBs, e a velocidade da bandar larga, em Mbps. \n");
    scanf("%f", &MB);
    scanf("%f", &Mbps);

    Mbs = MB * 8;
    segundos = Mbs / Mbps;
    minutos = segundos / 60;
    printf("%.2f minutos\n", minutos);
    system("pause");
    return 0;
}