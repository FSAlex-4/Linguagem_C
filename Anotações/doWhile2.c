/*Diferença crucial do Do-While para o While:
Condição avaliada somente ao final
Bloco de comandos é executado obrigatoriamente , ao menos 1x*/

/*Sintaxe:
do{
    <bloco_de_comandos>
    }while(<condição>);*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    
    return 0;
}