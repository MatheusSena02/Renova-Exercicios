#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c, d, e, inimigas;
    bool condicional = false;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a < 0 || a > 1000 || b < 0 || b > 1000 || c < 0 || c > 1000 || d < 0 || d > 1000 || e < 0 || e > 1000 || b+c+d+e > a)
    {
        if(a < 0 || a > 1000 || b+c+d+e > a)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valor do total de naves sondadas no quadrante (a) inválido. Digite outro valor : ");
                scanf("%d", &a);
                if(a >= 0 && a <= 1000)
                {
                    condicional = false;     
                }
            }
        if(b+c+d+e > a)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valores inválidos. Digite-os novamente : ");
                scanf("%d %d %d %d", &b, &c, &d, &e);
                if(b+c+d+e <= a)
                {
                    condicional = false;
                }
            }
        }
        }
        if(b < 0 || b > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de naves amigas a frente de Luke inválida. Digite outro valor : ");
                scanf("%d", &b);
                if(b >= 0 && b <= 1000)
                {
                    condicional = false;    
                }
            }    
        }
        if(c < 0 || c > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de naves amigas a frente de Luke inválida. Digite outro valor : ");
                scanf("%d", &c);
                if(c >= 0 && c <= 1000)
                {
                    condicional = false;    
                }
            }    
        }
        if(d < 0 || d > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de naves amigas a frente de Luke inválida. Digite outro valor : ");
                scanf("%d", &d);
                if(d >= 0 && d <= 1000)
                {
                    condicional = false;    
                }
            }    
        }
        if(e < 0 || e > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de naves amigas a frente de Luke inválida. Digite outro valor : ");
                scanf("%d", &e);
                if(e >= 0 && e <= 1000)
                {
                    condicional = false;    
                }
            }    
        }
    }
    inimigas = a - b - c - d - e;
    if(inimigas < 0)
    {
        inimigas = 0;   
    }
    printf("%d", inimigas);
}