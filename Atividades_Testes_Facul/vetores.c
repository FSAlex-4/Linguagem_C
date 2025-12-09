#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];

system("clear");

    for (int i = 0; i <= 10; i++)
    {   
        num[i] = i + 10;
        
        
    }
    for (int j = 0; j <= 10; j++)
    {
        printf("Valor dos vetores: %d\n", num [j]);
    }
    
        return 0;
}