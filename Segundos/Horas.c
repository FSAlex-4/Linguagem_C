#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
   long int segundos;

   printf("DIgite o N° de segundos: ");
    scanf("%ld", &segundos);
    printf("Horas: %ld\n", segundos / 3600);
    printf("Minutos: %ld\n", segundos%3600 /60);
    printf("Segundos: %ld\n", segundos%60);

    return 0;
}