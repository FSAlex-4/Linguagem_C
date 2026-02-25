#include <stdio.h>
#include <stdlib.h>

/*Sintaxe:[
    fgets(variavel,tamanho, stdin)*/

int main()
{
    system("clear");

    char s[50];
    char j[50];

    printf("Digite algo(scan padrão) :\n");
    fgets(s, sizeof(s), stdin);
    
    printf("Resultado: %s\n", s);
    
    printf("Digite um nome de um jogo:\n");
    fgets(j, sizeof(j), stdin);

    printf("Esse jogo %s, é bom viu.", j);

    return 0;
    
}