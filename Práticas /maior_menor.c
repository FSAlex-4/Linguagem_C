#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int num[10];
    int i, maior, menor, base;

    printf("Digite um valor pra gente começar a brincar:\n");
    scanf("%d", &base);
    maior=menor=base;
    printf("Ok ok, vamos começar então.\n");
    
    for ( i = 0; i < 10; i++)
    {
        printf("Digite um núemro ai: ");
        scanf("%d", &num[i]);
        if (num[i] > maior)
            {   maior = num[i];
                
         }if (num[i] < menor && num[i] >= 0)
         {
            menor = num[i];
         }
           
    }
        printf("Vetores e posições:\n");
        for ( i = 0; i < 10; i++)
        {   printf("vetor[%d]: %d \n", i, num[i]);
           
          }
          
           printf("\n O maior número digitado foi %d.", maior);
           printf("\n O menor número digitado foi %d.", menor);

    return 0;
    
}