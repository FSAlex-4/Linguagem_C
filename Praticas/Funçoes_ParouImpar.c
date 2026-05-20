#include <stdio.h>
#include <stdlib.h>

char parouimpar(int num)//Função que recebe um número inteiro e retorna 'P' se for par ou 'I' se for ímpar.//
{
    if(num % 2 == 0)
    {
        return 'P';
        //return 'Par';
 
    }
    else {
        return 'I';
        //return 'Ímpar';
    }
}
int main()
{
     system("clear");

     int N;
     // char R;//
     printf("Digite um número: ");
     scanf("%d", &N);
     // R = parouimpar(N); Outra forma de se fazer a mesma coisa.//
     // printf("O número %d é %s.\n", N, parouimpar(N)); Outra forma de se fazer a mesma coisa.//
    if(parouimpar(N) == 'P')
    {
        printf("O numero %d é par.\n", N);
    }
    else{
        printf("O número %d é Impar.\n", N);
    }
    return 0;
}