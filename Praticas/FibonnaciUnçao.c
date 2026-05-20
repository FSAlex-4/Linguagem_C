#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int *a, int *b)
{   int C;
    C =  *a + *b;
     *a = *b; 
     *b = C;

     return C;
}
int main()
{ system("clear");

int N1 = 0, N2 = 1, n, i, c;
printf("Informe quantos números da sequência de Fibonacci você quer ver: ");
scanf("%d", &n);
printf("Sequência de FIbonacci:\n");
printf("%d ", N1);
printf("%d ", N2);
for ( i = 3; i < n; i++)
{
    c = Fibonacci(&N1, &N2);
    printf("%d ", c);
}

return 0;
}
