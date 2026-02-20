#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   system("clear");

   float salario;
   char estado_civil;

   printf("Qual o sálario do funcionário? R$ ");
   scanf("%f", &salario);
   printf("Qual o estado civil do funcionário? ");
   scanf(" %c", &estado_civil); /*se atentar ao espaço das aspas para caractere*/
    if (estado_civil == 'C'|| estado_civil == 'c')
    {
        printf("Funcionário casado.Imposto sobre o salário 0.09\n");
        printf("Imposto: %2.f\n", salario * 0.09);

    }else{
        if (estado_civil == 'S' || estado_civil == 's')
        {
            printf("Funcionário solteiro. Imposto sobre o salário 0.10\n");
            printf("Imposto: %.2f\n", salario * 0.10);
        }else{
            printf("Estado civil inválido.\n");
        }
        
    }
    
    return 0;
    
}