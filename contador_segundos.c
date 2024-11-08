#include <stdio.h>

int main()
{
    int tempo, segundos, horas, minutos, condicional = 0;
    printf("Tempo : ");
    scanf("%d", &tempo);
    if(tempo < 1 || tempo > 100000000)
    {
        condicional = 1;
        while(condicional == 1)
        {
            printf("Valor inválido, digite outro valor : ");
            scanf("%d", &tempo);
            if(tempo >= 1 && tempo <= 100000000)
            {
                condicional = 0;
            }
        }
        
    }
    horas = tempo/3600;
    minutos = (tempo%3600)/60; 
    segundos = (tempo%3600)%60; 
    printf("%dh %dm %ds", horas, minutos, segundos);
}