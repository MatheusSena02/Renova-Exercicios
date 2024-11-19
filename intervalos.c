#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y, w, z, a;
    bool respostaintervalo1 = false, respostaintervalo2 = false, condicional = false;
    scanf("%d %d", &x, &y);
    if(x >= y)
    {
        condicional = true;
        while(condicional == true)
        {
            printf("Valor inválido, o 1° valor deve ser menor que o 2°. Digite novamente as duas entradas : ");
            scanf("%d %d", &x, &y);
            if(x < y)
            {
                condicional = false;    
            }
        }
    }
    scanf("%d %d", &w, &z);
    if(w >= z)
    {
        condicional = true; 
        while(condicional == true)
        {
            printf("Valor inválido, o 1° valor deve ser menor que o 2°. Digite novamente as duas entradas: ");
            scanf("%d %d", &w, &z); 
            if(w < z)
            {
                condicional = false;    
            }
            
        }
    }
    scanf("%d", &a);
    int tamanho1, tamanho2;
    tamanho1 = y-x;
    tamanho2 = z-w;
    int intervalo1[tamanho1], intervalo2[tamanho2];
    intervalo1[tamanho1-1] = y;
    for(int i = 0; i <= tamanho1; i++)
    {
        intervalo1[i] = y - tamanho1 + i;
        if(intervalo1[i] == a)
        {
            respostaintervalo1 = true;
        }
    }
    for(int j = 0; j < tamanho2; j++)
    {
        intervalo2[j] = w + j;
        if(intervalo2[j] == a)
        {
            respostaintervalo2 = true;    
        }
    }
    if(respostaintervalo1 == respostaintervalo2)
    {
        if(respostaintervalo1 == true && respostaintervalo2 == true)
        {
            printf("Ambos!");    
        }else if(respostaintervalo1 == false && respostaintervalo2 == false)
        {
            printf("Nenhum!");    
        }
    }else if(respostaintervalo1 != respostaintervalo2)
    {
        if(respostaintervalo1 == true && respostaintervalo2 == false)
        {
            printf("Primeiro intervalo!");
        }else if(respostaintervalo1 == false && respostaintervalo2 == true)
        {
            printf("Segundo intervalo!");
        }
    }
}