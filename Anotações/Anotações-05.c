#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int num;
    
    printf("Manda um numero paizao: ");
    scanf("%d", &num); /*Pra ler qualquer variável tipo, char, int, float, double com scanf precisa usar esse &(E comercial)*/
    if (num % 2 == 0)
    {
        printf("Seu número somado com 20 é igual á %d.\n", num+=20);
        printf("E o resultado disso multiplicado por 5 seria %d.\n", num*=5);
    }else{
        printf("Seu número subtraído por 10 é igual á %d\n", num-=10);
        printf("E se o resultado disso  fosse dividido por  2 seria igual á %d\n", num/=2);
    }

    return 0;

}

/*      ATRIBUIÇÕES ARITMÉTICAS    */
/*Operadores de atribuição aritmética:
° Incremento  em 1 unidade : ++
° Decremento em 1 unidade: --
° Incremento genérico: +=
° Decremento genérico: -=
° Atribuição com multiplicação: *=
° Atribuição com divisão: /=        */