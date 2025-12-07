#include <stdio.h>

int main()
{

    unsigned int idade; /*unsigned(usado quando vocÊ queira que a váriavel contenha apenas valores positivos)*/
    
    printf("Me fala sua idade meu rei: ");
    scanf("%u", &idade);
    printf("Então você tem %u anos\n", idade);

    return 0;

}