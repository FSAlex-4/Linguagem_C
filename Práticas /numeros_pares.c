#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int numeros[12];
    int pares [12];
    int impares [12];
    int i;

    for ( i = 0; i < 12; i++)
      {
       printf("Digite um número chefe: ");
       scanf("%d", &numeros[i]);
         
       if ( numeros[i] % 2 == 0 )
        {
            pares[i]= numeros[i];
            printf("Numero digitado é Par: %d \n", pares[i]);
            
        } else{
                 impares[i] = numeros[i];
                 printf("Esse número é Impar: %d \n", impares[i]);   
            }
    } printf("Numeros digitados: ");
    for (i = 0; i < 12; i++)
      {
        printf(" %d ", numeros[i]);
        }
    
    return 0;
}