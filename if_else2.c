#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    float salario, taxa;
    
    printf("Qual o sálario do funcionário? R$ ");
    scanf("%f", &salario);

    if (salario < 1000){
        taxa = 0.5;
    }
      else {
        
     } if (salario < 5000){
            taxa = .11;
     }
         else {
                taxa = .35;
           }

    printf("Salário: %.2f Imposto: %.2f Líquido: %.2f\n", salario, salario * taxa, salario * (1.0 - taxa));

    return 0;

 }
        