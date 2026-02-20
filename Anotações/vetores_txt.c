#include <stdio.h>
#include <stdlib.h>

/*Para vetores de 10 caracteres precisa-se de 11 posições. Uma sempre é destinada ao \0(informa onde se encerra)*/
/*Sintaxe de scanf geral
    scanf("%s", <str>); [%s para grupo de caracteres]
    Nota:Scanf não permite espaços para isso usamos...
 Sintaxe aprimorada:
    scanf("%,tam.-1>[^\n]s", <str>);  */

int main()
{
    system("clear");

    char s[10];

    printf("Digite algo(scan padrão) :\n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo(scanf robusto):\n");
    scanf(" %9[^\n]s" , s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    return 0;

    /*Apesar de testado esse código não funciona muito bem  no visual studio e o fflush não é permitido pelo padrão C só em alguns compiladores do Windows.*/

}