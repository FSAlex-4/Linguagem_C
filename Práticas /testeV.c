#include <stdio.h>

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int vetorin[5];
    int i,j;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    for (i = 5; i >= 0; i--)
    {
        vetorin[j] = vetor[i];
        j++;
    }
    printf("\n");
    for ( j = 0; j <= 5; j++)
    {
        printf("%d ", vetorin[j]);
    }
    
    
    
    return 0;
}