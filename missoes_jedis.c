#include <stdio.h>


int main()
{
    int n, xp, xpiyoda, xpiluke, xpiahsoka, condicional = 0;
    scanf("%d %d", &n, &xp);
    if(n < 1 || n > 100 || xp < 1 || xp > 100)
    {
        if(n < 1 || n > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Quantidade missões inválidas. Digite outro valor : ");
                scanf("%d", &n);
                if(n >= 1 && n <= 100)
                {
                    condicional = 0;
                }
            }
        }
        if(xp < 1 || xp > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Quantidade de XP inválida. Digite novamente : ");
                scanf("%d", &xp);
                if(xp >= 1 && xp <= 100)
                {
                    condicional = 0;    
                }
            }
        }
    }
    scanf("%d %d %d", &xpiyoda, &xpiluke,&xpiahsoka);
    if(xpiyoda < 1 || xpiyoda > 1500 || xpiluke < 1 || xpiluke > 1500 || xpiahsoka < 1 || xpiahsoka > 1500)
    {
        if(xpiyoda < 1 || xpiyoda > 1500)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("XP inical de Yoda inválido. Digite novamente : ");
                scanf("%d", &xpiyoda);
                if(xpiyoda >= 1 && xpiyoda <= 1500)
                {
                    condicional = 0;    
                }
            }
        }
        if(xpiluke < 1 || xpiluke > 1500)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("XP inicial de Luke inválido. Digite novamente : ");
                scanf("%d", &xpiluke);
                if(xpiluke >= 1 && xpiluke <= 1500)
                {
                    condicional = 0;    
                }
            }
        }
        if(xpiahsoka < 1 || xpiahsoka > 1500)
        {
            condicional = 1;
            printf("XP inicial de Ahsoka inválido. Digite novamente : ");
            scanf("%d", &xpiahsoka);
            if(xpiahsoka >= 1 && xpiahsoka <= 1500)
            {
                condicional = 0;
            }
        }
    }
    xpiyoda += n*xp;
    xpiluke += n*xp;
    xpiahsoka += n*xp;
    printf("Yoda %d\nLuke %d\nAhsoka %d", xpiyoda, xpiluke, xpiahsoka);
}