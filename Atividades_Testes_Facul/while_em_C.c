#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 6;

    system("clear");
    
    do /*garante que será executado pelo menos uma vez*/
    {
        printf("Contador: %d\n", contador);
    } while (contador <= 5);    /*While (enqanto alguma coisa for x ele continua)*/
                                /*diferencial para que ele finalize (váriavel++)forma abreviada*/
    return 0;
}