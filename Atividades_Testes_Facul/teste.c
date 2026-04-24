#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("clear");

    int n[5];
    int i, p;;

    for ( i = 1; i <= 5; i++)
    {
        printf("Digite o %d° número: ", i);
        scanf("%d", &n[i]);

    }
    
    printf("Soma entre os números pares: %d", p);
}