#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool condicional = false;
    scanf("%d", &n);
    if(n < 1 || n > 1000)
    {
        condicional = true;
        while(condicional == true)
        {
            printf("Valor inválido. Digite outro valor : ");
            scanf("%d", &n);
            if(n >= 1 && n <= 1000)
            {
                condicional = false;    
            }
        }
    }
    int p[n], m[n], podertotal[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i], &m[i]);    
        if(p[i] < 1 || p[i] > 1000 || m[i] < 1 || m[i] > 1000)
        {
            if(p[i] < 1 || p[i] > 1000)
            {
                condicional = true;
                while(condicional == true)
                {
                    printf("Dano de ataque principal inválido. Digite outro valor : ");
                    scanf("%d", &p[i]);
                    if(p[i] >= 1 && p[i] <= 1000)
                    {
                        condicional = false; 
                    }
                }
            }
            if(m[i] < 1 || m[i] > 1000)
            {
                condicional = true;
                while(condicional == true)
                {
                    printf("Acréscimo de poder inválido. Digite outro valor : ");
                    scanf("%d", &m[i]);
                    if(m[i] >= 1 && m[i] <= 1000)
                    {
                        condicional = false; 
                    }
                }
            }
        }
        podertotal[i] = p[i] + m[i];
    }
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", podertotal[j]);    
    }
}