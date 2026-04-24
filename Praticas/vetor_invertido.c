#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");

    int original[6];
    int invertido[6];
    int i, j;

    for ( i = 0; i < 6; i++)
        {
        printf("Digite um número patrão: ");
        scanf("%d", &original[i]);

       }
       printf("Vetor Original:\n");
    for ( i = 0; i < 6; i++)
        {
        printf("%d ", original[i]);

       }for (i = 5; i >= 0; i--)
        {
            invertido[j] = original[i];
            j++;
         }
    
    printf("\nVetor Invertido:\n ");
    for ( j = 0; j < 6; j++)
    {
        printf("%d ", invertido[j]);
    }
    
    return 0;
    
}