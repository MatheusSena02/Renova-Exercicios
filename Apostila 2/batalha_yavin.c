#include <stdio.h>
#include <stdbool.h> 

int main()
{
    int n, m, abates;
    bool condicional = false;
    scanf("%d %d", &n, &m);
    if(n < 3 || n > 100 || m < 1 || m > 1000)
    {
        if(n < 3 || n > 100)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Dimensão da matriz inválida. Digite outro valor : ");
                scanf("%d", &n); 
                if(n >= 3 && n <= 100)
                {
                    condicional = false;    
                }
            }
        }
        if( m < 1 || m > 1000)
        {
            condicional = true;
            while(condicional == true)
            {
                printf("Número de teleportes de Luke. Digite outro valor : ");
                scanf("%d", &m); 
                if(n >= 1 && n <= 1000)
                {
                    condicional = false;    
                }
            }
        }
    }
    int matriz[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);    
        }    
    }
    int l, c;
    for(int k = 0; k < m; k++)
    {
        scanf("%d %d", &l, &c);
        matriz[l][c] = 0;
        for(int a = l; a >= 0; a--)
        {
            if(matriz[l][c] == matriz[a][c])
            {
                continue;    
            }else if(matriz[l][c] != matriz[a][c])
            {
                abates++;
                break;
            }
        }
    }
    printf("%d", abates);
}
