#include <stdio.h>
#include <stdlib.h>

/*Estruturas de dados unidimensionais
Índice único controla as posições
Sintaxe de declaração:
    <tipo> <nome>[<tamanho>]*/

int main()
{
    int v[5];
    float m;

system("clear");

    v[0]= 50;
    v[1]= 40;
    v[2]= 30;
    v[3]= 20;
    v[4]= 10;
    
    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5; /*Média aritimética simples  "Soma de todos os termos/Quantidade de termos"*/

    printf("Resultado: %f\n", m);
    
        return 0;
}