#include <stdio.h>

int main()
{
    int n, p[100], maisforte = p[0], condicional = 0;
    printf("N° de campeões favoritos de Lucas : ");
    scanf("%d", &n);
    if(n < 1 || n > 100)
    {
        condicional = 1;
        while(condicional == 1)
        {
            printf("Valor inválido. Digite um novo valor : ");
            scanf("%d", &n);
            if(n > 1 && n < 100)
            {
                condicional = 0;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("Nível de poder do %d° campeão : ", i+1);
        scanf("%d", &p[i]);
        if(p[i] <= 0 || p[i] > 10000)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Nível de poder inválido. Digite novamente : ");
                scanf("%d", &p[i]);
                if(p[i] > 0 && p[i] <= 10000)
                {
                    condicional = 0;
                }
            }
        }
    }
    for(int a = n; a >= 0; a--)
    {
        if(maisforte <= p[a-1])
        {
            maisforte = p[a-1];
        }
    }
    printf("Nível do campeão mais forte : %d", maisforte);
}