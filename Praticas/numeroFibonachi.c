#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i, a=0 , b=1, c, n;
    printf("Informe quantos números da sequência de Fibonacci você quer ver: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a);
        c= a + b;
        a= b;
        b = c;

    }
    

    return 0;
}