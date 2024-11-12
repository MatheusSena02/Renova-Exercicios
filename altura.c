#include <stdio.h>

int main()
{
    int a, b, c;
    int condicional = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a < 100 || a > 200 || b < 100 || b > 200 || c < 100 || c > 200)
    {
        if(a < 100 || a > 200)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor da primeira altura (A) inválido. Digite novamente : ");
                scanf("%d", &a);
                if(a >= 100 && a <= 200)
                {   
                    condicional = 0;                    
                }
            }
        }
        if( b < 100 || b > 200 )
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor da segunda altura (B) inválida. Digite novamente : ");
                scanf("%d", &b);
                if(b >= 100 && b <= 200)
                {
                    condicional = 0;
                }
            }
        }
        if(c < 100 || c > 200)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor da terceira altura (C) inválida. Digite novamente : ");
                scanf("%d", &c);
                if(c >= 100 && c <= 200)
                {
                    condicional = 0;
                }
            }
        }
    }
    if(a >= b && a > c)
    {
        printf("%d", a);
    }else if(b > a && b >= c)
    {
        printf("%d", b);    
    }else 
    {
        printf("%d", c);    
    }
}