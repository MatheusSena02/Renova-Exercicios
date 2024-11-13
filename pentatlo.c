#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int x, n[5];
    float somanotas,media;
    scanf("%d", &x);
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for(int a = 0; a < 5; a++)
    {
        somanotas += n[a];
    }
    media = somanotas/5;
    printf("%d %.1f", x, media);
}