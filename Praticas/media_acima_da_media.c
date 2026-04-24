#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int nota[7], calculo, media, acimaM;
    int i, S = 1;

    printf("Vamos ver que é que vai ter que fazer recuperação, manda as notas ai chefe:\n");
    
    for ( i = 0; i < 8; i++)
    {
        printf("Nota %d°: ", S);
        scanf("%f", &nota[i]);
        S++;
        calculo += nota[i];
    }

    media= calculo / 7;

    printf("A média das notas foi %.2f.\n",media);
    
    for (i = 0; i < 7; i++)
    {
         if (nota[i] > media)
       {
        acimaM= nota[i];
        printf("A nota acima da média foi %.2f.\n", acimaM);
         }
    }
    
    return 0;

}