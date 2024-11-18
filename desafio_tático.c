#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p, s; 
    bool condicional = false;
    scanf("%d", &p);
    scanf("%d", &s);
    int podersoldado[s][2], ataque[p], defesa[p];
    for(int a = 0; a < p; a++)
    {
        for(int b = 0; b < s; b++)
        {
            for(int c = 0; c < 2; c++)
            {
                scanf("%d", &podersoldado[b][c]);    
                if(podersoldado[b][c] < 1 || podersoldado[b][c] > 100)
                {
                    if(podersoldado[b][0] < 1 || podersoldado[b][0] > 100)
                    {
                        condicional = true;
                        while(condicional == true)
                        {
                            printf("Valor de ataque do soldado inválido. Digite outro valor : ");
                            scanf("%d", &podersoldado[b][0]);
                            if(podersoldado[b][0] >= 1  && podersoldado[b][0] <= 100)
                            {
                                condicional = false;    
                            }
                        }
                    }
                    if(podersoldado[b][1] < 1 || podersoldado[b][1] > 100)
                    {
                        condicional = true;
                        while(condicional == true)
                        {
                            printf("Valor de defesa do soldado inválido. Digite outro valor : ");
                            scanf("%d", &podersoldado[b][1]);
                            if(podersoldado[b][1] >= 1 && podersoldado[b][1] <= 100)
                            {
                                condicional = false;
                            }
                        }
                    }
                }
            }
        }
        for(int d = 0; d < s; d++)
        {
            ataque[a] += podersoldado[d][0];
            defesa[a] += podersoldado[d][1];
        }
    }
    for(int e = 0; e < p; e++)
    {
        printf("%d %d\n", ataque[e], defesa[e]);    
    }
}
