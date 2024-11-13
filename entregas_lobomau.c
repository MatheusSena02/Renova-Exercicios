#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t,d, valorfinal, v, p;
    bool condicional = false;
    scanf("%d %d", &t, &d);
    if(t < 1 || t > 1000 || d < 1 || d > 1000)
    {
        if(t < 1 || t > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Tamanho da estrada inválido. Digite outro valor : ");
                scanf("%d", &t);
                if(t >= 1 && t <= 1000)
                {
                    condicional = false;
                }
            }
        }
        if(d < 1 || d > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Distância entre os pedágios inválida. Digite outro valor : ");
                scanf("%d", &d);
                if(d >= 1 && d <= 1000)
                {
                    condicional = false;    
                }
            }
        }
    }
    scanf("%d %d", &v, &p);
    if(v < 1 || v > 100 || p < 1 || p >100)
    {
        if(v < 1 || v > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valor cobrado por km inválido. Digite outro valor : ");
                scanf("%d", &v);
                if(v >= 1 && v <=100)
                {
                    condicional = false;    
                }
            }
        }
        if(p < 1 || p > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Valor cobrado em cada pedágio inválido. Digite outro valor : ");
                scanf("%d", &p);
                if(p >= 1 && p <= 100)
                {
                    condicional = false;    
                }
            }
        }
    }
    valorfinal = ((t/d)*p) + (v*t);
    printf("%d", valorfinal);
}