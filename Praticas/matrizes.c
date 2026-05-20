#include <stdio.h>
#include <stdlib.h>

int main()
{


    system("clear");
    
    int matriz[3][3];
    int i, j;
    
    for( i = 0; i< 3; i++)
    {
        for (j = 0; j < 3; j++)
    {
        printf("Digite o valor para posições de linhas e colunas: [%d , %d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        //printf("%d\n", matriz[i][j]);//
    }
    }
    for( i = 0; i< 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    

    return 0;

}