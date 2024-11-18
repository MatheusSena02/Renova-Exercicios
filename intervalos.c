#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y, w, z, a;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &w, &z);
    scanf("%d", &a);
    int intervalo1[y-x], intervalo2[z-w];
    bool respostaintervalo1 = false, respostaintervalo2 = false;
    intervalo1[y-x] = y;
    intervalo2[0] = w;
    for(int i = 0; i <= y-x; i++)
    {
        intervalo1[i] = y-x-1+i;
        if(intervalo1[i] == a)
        {
            respostaintervalo1 = true;    
            break;
        }
    }
    for(int j = 1; j < z-w; j++)
    {
        intervalo2[j] = intervalo2[0] + j;    
        if(intervalo2[j] == a)
        {
            respostaintervalo2 = true;    
            break;
        }
    }
    if(respostaintervalo1 == respostaintervalo2)
    {
        printf("Ambos!");    
    }else if(respostaintervalo1 == true && respostaintervalo2 == false)
    {
        printf("Primeiro intervalo!");    
    }else if(respostaintervalo1 == false && respostaintervalo2 == true)
    {
        printf("Segundo intervalo!");    
    }else 
    {
        printf("Nenhum!");
    }
}