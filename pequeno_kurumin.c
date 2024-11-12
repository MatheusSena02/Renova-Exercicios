#include <stdio.h>

int main()
{
    int n, a, b, c, d, s, soma, subtracao;
    int condicional = 0;
    scanf("%d", &n);
    if(n < 1 || n > 20)
    {
        condicional = 1;
        while(condicional == 1)
        {
            printf("Quantidade de gaiolas inválida. Digite outro valor : ");
            scanf("%d", &n);
            if(n >= 1 && n <= 20)
            {
                condicional = 0;    
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a < -20 || a > 50 || b < -20 || b > 50 || c < -20 || c > 50 || d < -20 || d > 50)
        {
            if(a < -20 || a > 50)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Lado A da gaiola inválido. Digite outro valor : ");
                    scanf("%d", &a);
                    if(a >= -20 && a <= 50)
                    {
                        condicional = 0;
                    }
                }
            }   
            if(b < -20 || b > 50)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Lado B da gaiola inválido. Digite outro valor : ");
                    scanf("%d", &b);
                    if(b >= -20 && b <= 50)
                    {
                        condicional = 0;
                    }
                }
            }    
            if(c < -20 || c > 50)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Lado C da gaiola inválido. Digite outro valor : ");
                    scanf("%d", &c);
                    if(c >= -20 && c <= 50)
                    {
                        condicional = 0;
                    }
                }
            }    
            if(d < -20 || d > 50)
            {
                condicional = 1;
                while(condicional == 1)
                {
                    printf("Lado D da gaiola inválido. Digite outro valor : ");
                    scanf("%d", &d);
                    if(d >= -20 && d <= 50)
                    {
                        condicional = 0;
                    }
                }
            }    
        }
        soma = a + b + c + d;
        if(soma >= 100)
        {
            subtracao = a - b - c - d;
            s += subtracao;
        }else 
        {
            s += soma;
        }
    }
    printf("%d anos de vida", s);
}
