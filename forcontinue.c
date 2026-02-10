#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; /*Com o continue ao atingir a condição o lçao pula e segue para a próxima repetição, caso fosse o break assim que atigisse a condição o laço seria encerrado*/
        }
        
        printf("%d\n", i);
    }
    
 
    return 0;

}