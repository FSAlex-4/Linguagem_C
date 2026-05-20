#include <stdio.h>
#include <stdlib.h>

int Fatorial(int Valor)
{
    int i , R;
    R = 1;
    for (i = 1; i <= Valor; i++)
    {
        R = R *i;
    }
    return R;
}
int main()
{
    int N, F;

    system ("clear");
    printf("Digite um número para calcular o Fatorial: ");
    scanf("%d", &N);
    F = Fatorial(N);
    printf("O valor de %d! '%d'.\n", N , F);

    return 0;
}