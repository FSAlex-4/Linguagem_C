#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float salario;
    
    printf("Qual o salário: "); 
    scanf("%f", &salario);
    salario = salario > 1000 ? salario*1.05 : salario*1.07;
    printf("Novo Salário: %.2f\n", salario);
}
        /*O operador ? devolve o resultado de salario*1.05 se salario > 1000 o resultado de salario*1.07, caso contrário.
O resultado do operador ? é então atribuído à variável salario.*/
/*Outras formas de se escrever a linha:*/

/* salario = salario * (salario > 1000) ? 1.05 : 1.07; */
/* salario = salario * (1 + ((salario > 1000) ? .05 : .07)); */
/* salario = salario + salario * ((salario > 1000) ? .05 : .07); */

/* Embora parecendo semelhantes, a instrução if-els e o operador ? não saõ iguais.
O if-else indica quais as instruções a executar, enquanto o operador ? devolve sempre um resultado
(coisa que o if não faz). */