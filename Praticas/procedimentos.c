#include <stdio.h>
#include <stdlib.h>

void ParouImpar(int v)
{
    printf("O valor de V é:  %d  \n", v);
    if(v%2==0)
        printf("O número é par\n");
    else
        printf("O número é ímpar\n");
}
int main()
{
    system("clear");

    int n;
    printf("DIgite um número: ");
    scanf("%d", &n);
    ParouImpar(n);
    printf("O valor digitado foi %d: \n", n);
    
    return 0;
}