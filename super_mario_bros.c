#include <stdio.h>


int main()
{
    int sc, mm, ck, totalsc = 30, totalmm = 6, totalck = 3, condicional = 1;
    scanf("%d %d %d", &sc, &mm, &ck);
    if(sc < 0 || sc > 30 || mm < 0 || mm > 6 || ck < 0 || ck > 3)
    {   
        
        if(sc < 0 || sc > 30)
        {
            condicional = 1;
            while(condicional == 1)
            {
                
                printf("Quantidade inválida de Stars Coins. Digite novamente : ");
                scanf("%d", &sc);
                if(sc >= 0 && sc <= 30)
                {
                    condicional = 0;   
                }
            }
        }
        if(mm < 0 || mm > 6)
        {
            condicional = 1;
            while(condicional == 1)
            {
                
                printf("Quantidade inválida de Mega Mushrooms. Digite novamente :");
                scanf("%d", &mm);
                if(mm >= 0 && mm <= 6)
                {
                    condicional = 0;
                }
            }
        }
        if(ck < 0 || ck > 3)
        {
            condicional = 1;
            while(condicional == 1)
            {
                printf("Quantidade inválida de Carapaças Koopa Azul. Digite novamente :");
                scanf("%d", &ck);
                if(ck >= 0 && ck <= 3)
                {
                    condicional = 0;
                }
                    
            }
        }
    }
    if(sc == totalsc)
    {
        printf("PROXIMO MUNDO");
    }else 
    {
        printf("%d %d %d", totalsc-sc, totalmm - mm, totalck - ck);
    }
}
