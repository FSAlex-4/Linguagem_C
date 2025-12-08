#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2, op;
    double resultado;

    system("clear");

    printf("Manda um número: \n");
    scanf("%d", &num1);
    printf("Manda mais um paizão: \n");
    scanf("%d", &num2);
    printf("1:SOMA\n2:SUBTRAÇÃO\n3:MULTIPLICAÇÃO\n4:DIVISÃO\n");
    printf("Qual operação vai querer? ");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
        printf("A soma entre %d e %d é igual á: %d\n", num1, num2, num1 + num2);
        break;
        case 2:
        resultado = (num1 - num2);
        printf("A subtração entre %d e %d é igual á : %.3f\n", num1, num2, resultado);
        break;
        case 3:
        resultado = (num1 * num2);
        printf("A multiplicação entre %d e %d é igual á : %.3f\n", num1, num2, resultado);
        break;
        case 4:
            resultado = (num1 / num2);
            printf("A divisão entre %d e %d é igual á: %.3f\n", num1, num2, resultado);
            break;
    
    }
    
    return 0;

}