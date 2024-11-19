#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool condicional = false;
    scanf("%d", &n);
    if(n < 1 || n > 9)
    {
        if(n < 1)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Número de níveis muito baixo. Digite outro valor : ");
                scanf("%d", &n);
                if(n >= 1)
                {
                    condicional = false;    
                }
            }
        }
        if(n > 9)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Número de níveis acima do permitido. Digite outro valor : ");
                scanf("%d", &n);
                if(n <= 9)
                {
                    condicional = false;    
                }
            }
        }
    }
    for(int h = 1; h <= n; h++)
    {
        for(int j = h; j <= h; j++)
        {
            for(int a = 0; a < n-j; a++)
            {
                printf(" ");    
            }
            for(int b = 0; b < j*2-1; b++)
            {
                printf("%d", j);    
            }
            for(int c = 0; c < n-j; c++)
            {
                printf(" ");    
            }
            printf("\n");
        }
    }
}