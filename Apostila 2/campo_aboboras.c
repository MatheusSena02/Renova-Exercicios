#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int campo[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &campo[i][j]);    
        }    
    }
    int x, y; 
    scanf("%d %d", &x, &y);
    int harry = 0, ron = 0;
    for(int k = 0; k < n; k++)
    {
        harry += campo[x][k];
        if(k == y)
        {
            harry -= campo[x][y];    
        }
        
    }
    for(int l = 0; l < n; l++)
    {
        ron += campo[l][y];
    }
    printf("Harry %d\n", harry);
    printf("Ron %d", ron);
}