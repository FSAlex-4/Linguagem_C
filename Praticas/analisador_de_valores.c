#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int n[5];
    int i, num = 5, s, nu, d, p;
    float m; 
  d = 0;
  nu = 0;
    for ( i = 1; i <= num; i++)
    {
        printf("Informe o %d° número: ", i);
        scanf("%d", &n[i]);
    }
    printf("Soma entre os valores : %d", s=(n[1]+n[2]+n[3]+n[4]+n[5]));
    printf("\n Média entre os valores: %2.2f", m=(s/num));
       p = 0;
    for (i = 1; i <= 5; i++)
    {
        if (n[i] % 2 == 0)
        {
            p = p + n[i];
        }
    }
    printf("\n Soma entre os números pares: %d", p);
        for (i = 1; i <= 5; i++)
     {
             if (n[i] % 5 == 0)
         {
            d = d+ 1;
         }
        }
    printf("\n Números divisíveis por 5: %d", d);
     for (i = 1; i < 5; i++)
     {
            if (n[i] == 0)
            {
            nu = nu + 1;
         }
        }
    printf("\nValores iguais a zero(Nulos): %d\n", nu);

        return 0;

}