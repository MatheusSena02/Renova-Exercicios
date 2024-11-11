#include <stdio.h>

int main()
{
    int k, j, h, condicional = 0;
    int newk, newj, newh, totalk, totalj, totalh;
    scanf("%d %d %d", &k, &j, &h);
    if(j < 0 || j > 100 || k < 0 || k > 100 || h < 0 || h > 100)
    {
        if(k < 0 || k > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de pokémons de Kanto inválido. Digite novamente : ");
                scanf("%d", &k);
                if(k >= 0 && k < 100)
                {
                    condicional = 0;
                }
            }
        }
        if(j < 0 || j > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de pokémons de Johto inválido. Digite novamente : ");
                scanf("%d", &j);
                if(j >= 0 && j < 100)
                {
                    condicional = 0;
                }
            }
        }
        if(h < 0 || h > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de pokémons de Hoenn inválido. Digite novamente : ");
                scanf("%d", &h);
                if(h >= 0 && h < 100)
                {
                    condicional = 0;
                }
            }
        }
    }
    scanf("%d %d %d", &newk, &newj, &newh);
    if(newk < 0 || newk > 100 || newh < 0 || newh > 100 || newj < 0 || newj > 0)
    {
        if(newk < 0 || newk > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de novos pokémons de Kanto inválido. Digite novamente : ");
                scanf("%d", &newk);
                if(newk >= 0 && newk < 100)
                {
                    condicional = 0;
                }
            }
        }
        if(newj < 0 || newj > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de novos pokémons de Johto inválido. Digite novamente : ");
                scanf("%d", &newj);
                if(newj >= 0 && newj < 100)
                {
                    condicional = 0;
                }
            }
        }
        if(newh < 0 || newh > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Número de novos pokémons de Hoenn inválido. Digite novamente : ");
                scanf("%d", &newh);
                if(newh >= 0 && newh < 100)
                {
                    condicional = 0;
                }
            }
        }
    }
    totalk = k + newk;
    totalj = j + newj;
    totalh = h + newh;
    printf("K : %d\nJ : %d\nH : %d", totalk, totalj, totalh);
}