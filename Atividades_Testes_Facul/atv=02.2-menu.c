#include <stdio.h>
#include <stdlib.h> /*Bliblioteca para o uso da função system("clear")*/

int main(void)
{
    int num;
    system("clear");    /*comando para limpar o temrinal em C(Linux)*/

    printf("Digite um número de 1 a 9: \n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Você inseriu o número 1\n");
        break;
    case 2:
        printf("Você inseriu o número 2\n");
        break;
    case 3:
        printf("Você inseriu o número 3\n");
        break;
    case 4:
        printf("Você inseriu o número 4\n");
        break;
    case 5:
        printf("Você inseriu o número 5\n");
        break;
    case 6:
        printf("Você inseriu o número 6\n");
        break;
    case 7:
        printf("Você inseriu o número 7\n");
        break; /*Usado pra fechar o case pois se não misturar os "cases" posteriores*/
    case 8:
        printf("Você inseriu o número 8\n");
        break;
    case 9:
        printf("Você inseriu o número 9\n");
        break;
    default:
        printf("Você inseriu %d aí você me fode eu te dei 9 opções pô\n", num); /*caso não digite nenhum dos "case" ira executar o bloco "defaut"*/
        break;        
    }
            /*estrutura básica de exemplo para o uso de switch case*/
    return 0;

}
