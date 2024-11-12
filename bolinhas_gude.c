#include <stdio.h>

int main()
{
    int n, q[50], resultado, condicional = 0;
    scanf("%d %d", &n, &q[0]);
    if(n < 1 || n > 50 || q[0] < 1 || q[0] > 50)
    {
        if(n < 1 || n > 50)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor do número de familiares inválido. Digite novamente : ");
                scanf("%d", &n);
                if(n >= 1 && n <= 50)
                {
                    condicional = 0;    
                }
            }
        }
        if(q[0] < 1 || q[0] > 50)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor da quantidade de bolinhas de gude inválido. Digite novamente : ");
                scanf("%d", &q[0]);
                if(q[0] >= 1 && q[0] <= 50)
                {
                    condicional = 0;
                }
            }
        }
    }
    q[1] = q[0]*2; 
    for(int i = 2; i <= n; i++)
    {
        q[i] = (q[i-2]*2) + q[i-1];
    }
    for(int a = 0.; a < n; a++)
    {
        resultado += q[a];
    }
    printf("%d", resultado);
    
}