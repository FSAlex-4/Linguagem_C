

/*Sintaxe
    while(<condição>){
        <bloco de comandos>
        }*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int n, t = 1;

    while (t <= 5)
    {
        n = 1;
        while (n<=10)
        {
            printf("%d x %2d = %2d\n",t, n , t*n);
            n++;

            putchar('\n');
        }
        
        putchar('\n');

        t++;
    }   

    return 0;
    
}