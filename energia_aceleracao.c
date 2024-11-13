#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int p, v;
    bool condicional = false;
    long int energia;
    scanf("%d %d", &p, &v);
    if(p < 40 || p > 100 || v < 0 || v > 300000000)
    {
        if(p < 40 || p > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valor de peso inválido. Digite outro valor : ");
                scanf("%d", &p);
                if(p >= 40 && p <= 100)
                {
                    condicional = false;    
                }
            }
        }
        if(v < 0 || v > 300000000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valor da velocidade inválido. Digite novamente : ");
                scanf("%d", &v);
                if(v >= 0 && v <= 300000000)
                {
                    condicional = false;
                }
            }
        }
    }
    energia = p*pow(v, 2);
    printf("%ld", energia);
}