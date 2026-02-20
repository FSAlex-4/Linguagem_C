#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int n , num , soma, produto;
    printf("Introduza um número: ");
    scanf("%d", &num);

    for (soma = 0, n = produto = 1; n <= num; n = n + 1 )
    {
        soma = soma + n;
        produto = produto * n;
    }
    
    printf("Soma = %d\n Produto = %d\n", soma, produto);

    return 0;
    
}