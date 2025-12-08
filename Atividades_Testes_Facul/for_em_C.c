#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {  

        if (i %2 ==0)
        {
            printf("O número %d é par\n", i);
        }  else {
            printf("O número %d é ímpar\n", i);
        }
        
    }
    
    return 0;
}