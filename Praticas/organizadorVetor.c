#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
  
int num[4];
int i, j, base;

for ( i = 0; i < 4; i++)
{
    printf("Digite um valor pra vente começar a maldade: \n");
    scanf("%d", &num[i]);
}
for (i = 0 ; i < 3; i++)
{ for ( j = i +1 ; j < 4; j++)
{
    if (num[i] > num[j])
    {
        base = num[i];
        num[i] = num[j];
        num[j] = base;
    }
    
}
}
printf("vetor organizado\n");
for ( i = 0; i < 4; i++)
{    printf("vetor[%d]: %d \n", i, num[i]);
    }
return 0;
}