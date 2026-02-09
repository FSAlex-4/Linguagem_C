#include <stdio.h>                  //inlui as funções de entrada e saída//
int main()                          //O Programa começa aqui //
{                                   //incio do Bloco de instruções //
    printf("Hello World\n");        //Comando para escrever "Hello Wolrd" usando a função <printf> no fim <\n>(New Line) para que após escrever pule uma linhha//

    /*SIntaxe:
        printf("Msg...(Variavel)...") */                          


    printf("C \nis the greatest\nLanguage\n");   //O New Line(\n) pode ser usado dessa forma que não sera alterado ou considerado erro em como os saltos de linha devem seguir.// 

    return 0;                       // para que o programa retorne 0 ou seja sem erros

}                                   // fim do Bloco de intruções //



/*        ESPECIFICADORES DE FORMATO:printf()
 Digito          Descrição                                             */
/*d ou i   Números em Base Decimal
    X    Números inteiros base hexadecimal
    f   Números decimais(. flutuante)
    e   Números em notação Científica(com casa decimal)
    c   Caracteres alfanuméricos(texto)
    s   Sequeência de caracteres alfanúmericos(texto)
 .<num> Especifica quantos digitos serão impressos após a vírgula       */

/*          Sequências de escape:printf()        */
/* Escape               Descrição                        */
/* \a      Toca um bipe,alarme sibiri oadrão do sistema
   \b               Backspace
   \n           Quebra de Linha
   \t          Tabulação horizontal(TAB)
   \r          Retorna ao início da linha
   \o             Caractere nulo
   \v             Tabulação vertical                                        */