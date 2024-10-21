#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int w, h, x, y;

    printf("Write the Width of the image. \n");
    scanf("%i", &w);

    printf("Write the Height of the image. \n");
    scanf("%i", &h);

    printf("Write the X axis of the pixel. \n");
    scanf("%i", &x);

    printf("Write the Y axis of the pixel. \n");
    scanf("%i", &y);

    if ((x > w) || (x < w) || (y > h) || (y < h))
    {
        printf("The pixel isn't in the image. \n");
    } 
    else if ((w <= 0) || (h <= 0))
    {
        printf("The image can't have width or height eguals or bellow 0. \n");
    }
    else 
    {
        printf("The pixel is in the image. \n");
    }

    system("pause");
    return 0;

}