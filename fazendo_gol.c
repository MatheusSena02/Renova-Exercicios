#include <stdio.h>
#include <ctype.h>

int main()
{
    char z, g;
    char d, c;
    scanf("%c %c", &z, &g);
    scanf(" %c %c", &d, &c);
    if(d != tolower(z) && d != toupper(z))
    {
        printf("Driblado\n");
        if(c != tolower(g) && c != toupper(g))
        {
            printf("Gol");
        }else 
        {
            printf("...e o goleiro pega");
        }
    }else 
    {
        printf("Bloqueado");
    }
    
}