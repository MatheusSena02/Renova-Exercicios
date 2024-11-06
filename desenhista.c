#include <stdio.h>

int main()
{
    int altura, espacos, piramide, condicional = 0;
    printf("Altura da pirâmide : ");
    scanf("%d", &altura);
    if(altura < 1 || altura > 20)
    {
        condicional = 1;
        while(condicional == 1)
        {
        printf("Valor inválido. Digite outro valor : ");
        scanf("%d", &altura);
            if(altura >= 1 && altura <= 20)
            {
                condicional = 0;
            }
        }
    }
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