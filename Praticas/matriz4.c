#include <stdio.h>
#include <stdlib.h>


int main()
{


    system("clear");
    
    int matriz[4][4];
    int i, j, somadv = 0, produto2l = 1, maior = 0;
    
    for( i = 0; i< 4; i++)
{
        for (j = 0; j < 4; j++)
    {
        printf("Digite o valor para posições de linhas e colunas: [%d , %d]: ", i, j);
        matriz[i][j] = rand() % 50;
        if (i == j)
        {
            somadv = somadv + matriz[i][j];
        }
    }
}    for( i = 0; i< 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
for  ( j = 0; j < 4; j++)
{
    produto2l = produto2l * matriz[2][j];
}
for ( i = 0; i < 4; i++)
{
    if(matriz[i][2] > maior)
    {
        maior = matriz[i][2];
    }
}

printf("A soma dos valores da diagonal principal é: %d\n", somadv);
printf("O produto dos valores da segunda linha é: %d\n", produto2l);
printf("O maior valor da terceira coluna é %d\n", maior);
    return 0;

}