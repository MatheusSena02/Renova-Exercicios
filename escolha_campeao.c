#include <stdio.h>

int main()
{
    int campeoes, poder[campeoes], maisforte;
    printf("Campeões Favoritos de Lucas : ");
    scanf("%d", &campeoes);
    for(int i = 0; i <= campeoes; i++)
    {
        printf("Nível de Poder do Campeão %d : ", i+1);
        scanf("%d", &poder[i]);
        fflush(stdin);
        if(poder[i] > poder[i - 1]) //possível erro : Busca de valor inexistente
        {
            maisforte = poder[i];
        }
    }
    printf("Maior poder : %d", maisforte);
}