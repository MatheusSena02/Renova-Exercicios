#include <stdio.h>
#include <stdbool.h> 

int main()
{
    int a, m, c,espadas;
    bool condicional = false;
    scanf("%d %d %d", &a, &m, &c);
    if(a < 1 || a > 100 || m < 1 || m > 100 || c < 1 || c > 100)
    {
        if(a < 1 || a > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de Aço Valiriano inválida. Digite outro valor :");
                scanf("%d", &a);
                if(a >= 1 && a <= 100)
                {
                    condicional = false;    
                }
            }
            
        }
        if(m < 1 || m > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Número de pedaços de madeira inválidos. Digite outro valor :");
                scanf("%d", &m);
                if(m >= 1 && m <= 100)
                {
                    condicional = false;    
                }
            }
        }
        if(c < 1 || c > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de tiras de couro inválida. Digite novamente : ");
                scanf("%d", &c);
                if(c >= 1 && c <= 100)
                {
                    condicional = false;    
                }
            }
        }
    }
    while(a > 0 || m > 0 || c > 0)
    {
        if(a >= 2 && m >= 3 && c >= 5)
        {
            espadas += 1;
        }
        a = a - 2;
        m = m - 3;
        c = c - 5;
    }
    printf("%d", espadas);
}
