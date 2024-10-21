#include <stdio.h>
#include <stdlib.h>

int main()
{
    char elemento, escolha;

    printf("Escolha a posicao de um dos digitos do numero '83214'. \n");
    scanf("%c", &escolha);

    switch (escolha){
        case '0':
            elemento = '8';
            printf("%c \n", elemento);
            break;
        case '1':
            elemento = '3';
            printf("%c \n", elemento);
            break;
        case '2':
            elemento = '2';
            printf("%c \n", elemento);
            break;
        case '3':
            elemento = '1';
            printf("%c \n", elemento);
            break;
        case '4':
            elemento = '4';
            printf("%c \n", elemento);
            break;
        default:
            printf("Elemento nao encontrado \n");
            return 1;
    }

    system("pause");
    return 0;
}