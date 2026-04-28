#include <stdio.h>
#include <stdlib.h>

void Fibonacci (int *a, int *b, int *c)
{   *c =  *a + *b;
    printf("%d ", *c);
     *a = *b; 
     *b = *c;
}
int main()
{ system("clear");

int N1, N2, n, i, c;
N1= 0;
N2= 1;
c = 0;
printf("Informe quantos números da sequência de Fibonacci você quer ver: ");
scanf("%d", &n);
printf("Sequência de FIbonacci:\n");
printf("%d ", N1);
printf("%d ", N2);
for ( i = 3; i < n; i++)
{
    Fibonacci(&N1, &N2, &c);

    
}

return 0;
}
