#include <stdio.h>

int main()
{
    int l, p, somal, somap;
    int condicional = 0;
    for(int i = 1; i <= 3; i++)
    {
        scanf("%d %d", &l, &p);
        if(l < 1 || l > 100 || p < 1 || p > 100)
        {
            if(l < 1 || l > 100)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Lucas está de sacanagem. Digite outro valor : ");
                    scanf("%d", &l);
                    if(l >= 1 && l <= 100)
                    {
                        condicional = 0;    
                    }
                }
            }
            if(p < 1 || p > 100)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Pedro está de sacanagem. Digite outro valor : ");
                    scanf("%d", &p);
                    if(p >= 1 && p <= 100)
                    {
                        condicional = 0;    
                    }
                }
            }
        }
        somal += l;
        somap += p;
    }
    if(somal > somap)
    {
        printf("Lucas");
    }else if(somap > somal)
    {
        printf("Pedro");    
    }else 
    {
        printf("Empate");    
    }
}