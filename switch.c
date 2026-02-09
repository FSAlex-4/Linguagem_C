#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    char Est_Civil;

    puts("Informe seu Estado Civil: ");
    scanf(" %c", &Est_Civil);
    switch (Est_Civil)
    { case 'c' :   
        case 'C': printf("Casado\n");
        break;
        case 's' :
        case 'S': printf("Solteiro\n"); 
        break;
        case 'd' :
        case 'D': printf("Divorciado\n");
        break;
        case 'v' :
        case 'V': printf("Viuvo(a)\n");
        break;

        default: printf("Estado Civil Invalido\n");
    }

    return 0;

}