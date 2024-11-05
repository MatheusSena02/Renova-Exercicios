#include <stdio.h>
#include <ctype.h>
int main()
{
    char p1, p2;
    printf("P1 : ");
    scanf(" %c", &p1);
    printf("P2 : ");
    scanf(" %c", &p2);
    if(tolower(p2) != tolower(p1) && tolower(p1) != tolower('N') && tolower(p2) != tolower('N'))
    {
        printf("Qualificado");
    }else
    {
        printf("Eliminado");
    }
}