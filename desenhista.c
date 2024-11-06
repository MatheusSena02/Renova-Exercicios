#include <stdio.h>

int main()
{
    int altura, espacos, piramide;
    printf("Altura da pirâmide : ");
    scanf("%d", &altura);
    for(int i = 1; i <= altura; i++) 
    {
        espacos = altura - i;
        piramide = altura - espacos;
        while(espacos != 0)
        {
            printf(">");
            espacos--;
        }
        while(piramide != 0)
        {
            printf("#");
            piramide--;
        }
    printf("\n");
    }
}