#include <stdio.h>

int main()
{
    int entrada[6], condicional = 0;
    float resultado;
    for(int i = 0; i < 6; i++)
    {
        printf("Valor : ");
        scanf("%d", &entrada[i]);
        if(entrada[i] < 0 || entrada[i] > 100)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Valor inválido. Digite novamente : ");
                scanf("%d", &entrada[i]);
                if(entrada[i] >= 0 && entrada[i] <= 100)
                {
                    condicional = 0;
                }
            }
        }
    }
    resultado = ((entrada[0]+entrada[1])*(entrada[2] - entrada[3])*(entrada[4] + entrada[5]))/2;
    printf("Eu sou FERA nas continhas e o resultado é %.1f", resultado);
}