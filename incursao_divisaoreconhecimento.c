#include <stdio.h>

int main()
{
    int n, soldados, levi = 20, condicional = 0;
    printf("Quantidade de Titãs : ");
    scanf("%d", &n);
    if(n%5 != 0)
    {
        condicional = 1;
        while(condicional == 1)
        {
            printf("Valor inválido. Digite um novo valor : ");
            scanf("%d", &n);
            if(n%5 == 0)
            {
                condicional = 0;
            }
        }
    }
    soldados = (n - levi)/5;
    if(soldados < 0)
    {
        soldados = 0;
    }
    printf("Quantidade de Soldados : %d", soldados);
}
