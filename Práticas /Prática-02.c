#include <stdio.h>

int main()
{
    printf("Programa que apresenta os Caracteres Especias\n\n");
    printf("\\n\t-\t<ENTER>\n");   /*Saída:     \n                 -                   <ENTER> */
    printf("\\\\t-\\n");           /*Saída: \\   -                  \                     */
    printf("\\t\t-\t<TAB>\n");     /*Saída: \t    -                  <TAB>                */
    printf("%%%%\t-\t%%\n");       /*Saída: %%     -                  %                   */ 
    printf("Aqui vai um Apito\a\n"); /*\a - Sinal Sonoro*/        
    printf("Aqui vai um Apito\7\n");
    
    return 0;

    
}