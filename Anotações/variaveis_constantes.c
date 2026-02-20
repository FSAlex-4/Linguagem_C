#include <stdio.h>
#define texto "Entrada de Dados" /*define que que sempre que o "texto" for usado sera substituiado por "Entrada de Dados" isso é uma constante.*/

int main()
{
    printf("%s\n", texto);

    int idade, num=123;
    float altura = 0.0;
    char nome[50];

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Qual o sua altura?\n");
    scanf("%f", &altura);

    printf("Digite seu nome?\n");
    scanf("%s", nome);


    printf("O valor de num = %d e o valor seguinte = %d\n",num,num+1);  /*O formato de escrita de um inteiro na função printf é %d.*/
                              /*devmos colocar em ordem quais valores devem aparecer separadors por vírgula, nos locais que contem %d*/  
    return 0;

}