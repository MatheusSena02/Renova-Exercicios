#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, narutinho, resultado;
    int condicional = false;
    scanf("%d", &n);
    if(n < 1 || n > 5000)
    {
        condicional = true;
        while(condicional == 1)
        {
            printf("Número de Inimigos não aceito, informe outro valor : ");
            scanf("%d", &n);
            if(n >= 1 && n <= 5000)
            {
                condicional = false;    
            }
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(pow(2, i) == n)
        {
            resultado = true;
            break;
        }else 
        {
            resultado = false;
            continue;
        }
    }
    if(resultado == true)
    {
        printf("Dattebayo");
    }else 
    {
        printf("Tururuuu");        
    }
}