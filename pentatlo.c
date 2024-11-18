#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int x, n[5];
    float somanotas,media;
    bool condicional = false;
    scanf("%d", &x);
    if(x < 1 || x > 1000)
    {
        condicional = true;
        while(condicional == true)
        {
            printf("Número do candidato inválido. Digite outro valor : ");
            scanf("%d", &x);
            if(x >= 1 && x <= 1000)
            {
                condicional = false;    
            }
        }
        
    }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        if(n[i] < 0 || n[i] > 10)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("%d° nota inválida. Digite novamente : ", i+1);
                printf("\n");
                scanf("%d", &n[i]);
                if(n[i] >= 0 && n[i] <= 10)
                {
                    condicional = false;  
                }
            }
        }
    }
    for(int a = 0; a < 5; a++)
    {
        somanotas += n[a];
    }
    media = somanotas/5;
    printf("%d %.1f", x, media);
}