#include <stdio.h>

int main(){

    int i = 6, soma = 0, k = 0;

    while (k < i)
    {
        k = k + 1;
        soma = soma + k;
        printf("k: %d\n", k);
    }
    printf("A soma dos numeros : %d", soma);
}