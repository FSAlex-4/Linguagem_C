#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int v[5];
    int i;

    for (i=0; i<5 ; i++)
    {
        printf("Insira um dado chef:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados inseridos:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}