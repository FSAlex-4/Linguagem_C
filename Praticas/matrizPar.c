#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor para posições da matriz [%d , %d]: ", i, j);
            scanf("%d ", &matriz[i][j]);    
        }
    }
    for( i = 0; i< 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                printf("{%4d}", matriz[i][j]);
            }
            else
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                printf("O valor da posição [%d, %d] é par.\n", i, j);
            }
            
        }
        
    }
    
    return 0;
}