#include <stdio.h>

int main()
{
    int x1, y1; //coordenadas para a entrega
    int x2, y2; //coordenadas atuais do drone
    int condicional = 0;
    printf("X1 e Y1 : ");
    scanf("%d %d", &x1, &y1);
    if(x1 < 1 || x1 > 1000 || y1 < 1 || y1 > 1000)
    {
        if(x1 < 1 || x1 > 1000) 
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Coordenada inválida X1, digite novamente : ");
                scanf("%d", &x1);
                if(x1 >= 1 && x1 <= 1000)
                {
                    condicional = 0;
                }
            }
        }
        if(y1 < 1 || y1 > 1000)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Coordenada inválida Y1, digite novamente : ");
                scanf("%d", &y1);
                if(y1 >= 1 && y1 <= 1000)
                {
                    condicional = 0;
                }
            }
        }
    printf("X2 e Y2 : ");
    scanf("%d %d", &x2, &y2);
    if(x2 < 1 || x2 > 1000 || y2 < 1 || y2 > 1000)
    {
        if(x2 < 1 || x2 > 1000)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Coordenada inválida X2, digite novamente : ");
                scanf("%d", &x2);
                if(x2 >= 1 && x2 <= 1000)
                {
                    condicional = 0;
                }
            }
        }
        if(y2 < 1 || y2 > 1000)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Coordenada inválida Y2, digite novamente : ");
                scanf("%d", &y2);
                if(y2 >= 1 && y2 <= 1000)
                {
                    condicional = 0;
                }
            }
        }
    }
    if(x1 == x2 && y1 == y2)
    {
        printf("Soltar pacote");
    }else 
    {
        printf("Não soltar pacote");
    }
    }
}