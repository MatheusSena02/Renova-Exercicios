#include <stdio.h>

float media_aluno(float *prova1, float *prova2, float *trabalho, float *media)

{
    int condicional = 1;
    do 
    {
        printf("Nota Prova 1 : ");
        scanf("%f", prova1);
        if(*prova1 < 0 || *prova1 > 10)
        {
            printf("Nota inválida. Digite novamente\n");
        }
    }while(*prova1 < 0 || *prova1 > 10);
    do
    {
        printf("Nota Prova 2 : ");
        scanf("%f", prova2);
        if(*prova2 < 0 || *prova2 > 10)
        {
            printf("Nota inválida. Digite novamente\n");
        }
    }while(*prova2 < 0 || *prova2 > 10);
    do
    {
        printf("Nota do Trabalho Final : ");
        scanf("%f", trabalho);
        if(*trabalho < 0 || *trabalho > 10)
        {
            printf("Nota inválida. Digite novamente");
        }
    }while(*trabalho < 0 || *trabalho > 10);
    *media = ((*prova1 * 4) + (*prova2 * 4) + (*trabalho * 2))/10;
}

int main()
{
    float nota1, nota2, trabalho, notafinal;
    media_aluno(&nota1, &nota2, &trabalho, &notafinal);
    printf("Resultado : %.2f", notafinal);
}