#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

int main()
{
    int n, t, contador;
    bool condicional = false;
    scanf("%d %d", &n, &t);
    if(n < 1 || n > pow(10, 5) || t < 1 || t > 20)
    {
        if(n < 1 || n > pow(10, 5))
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Quantidade de livros inválida. Digite outro valor : ");
                scanf("%d", &n);
                if(n >= 1 || n <= pow(10, 5))
                {
                    condicional = false;
                }
            }
        }
        if(t < 1 || t > 20)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Limite de vogais inválido. Digite outro valor : ");
                scanf("%d", &t);
                if(t >= 1 || t <= 20)
                {
                    condicional = false;    
                }
            }
        }
    }
    char nome[n][20];
    int saida[n];
    for(int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", nome[i]);
    }
    for(int j = 0; j < n; j++)
    {
        contador = 0;
        for(int k = 0; nome[j][k] != '\0'; k++)
        {
            if(nome[j][k] == 'a'||nome[j][k] == 'e'||nome[j][k] == 'i'||nome[j][k] == 'o'||nome[j][k] == 'u')
            {
                contador++;    
            }
        }
        if(contador > t)
        {
            saida[j] = 0;    
        }else 
        {
            saida[j] = 1;    
        }
    }
    for(int p = 0; p < n; p++)
    {
        printf("%d\n", saida[p]);    
    }

    return 0;
}
