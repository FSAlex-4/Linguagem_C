#include <stdio.h>

int main()
{
    float x;
    printf("introduza um N° real: ");
    scanf("%f",&x);
    printf("Parte inteira: %d\n", (int)x);
    printf("Parte fracionaria: %f\n", x - ((int)x));

    return 0;
    
}