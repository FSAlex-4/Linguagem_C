#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b)
{
    return a + b;
}
int main()
{   system("clear");
    int n1, n2;//s// 
    
    printf("Manda um número aê paizão: ");
    scanf("%d", &n1);
    printf("Só mais um chefe: ");
    scanf("%d", &n2);
    // s = soma(n1, n2);   Outra forma de se fazer a mesma coisa.//
    printf("A soma dos números é %d\n", soma(n1, n2));

    return 0;
}