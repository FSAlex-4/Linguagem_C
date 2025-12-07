#include <stdio.h>

int main()
{
    int num;
    
    printf("Manda um numero paizao: ");
    scanf("%d", &num); /*Pra ler qualquer variável tipo, char, int, float, double com scanf precisa usar esse &(E comercial)*/
    printf("O numero que vc escreveu foi %d chefe\n",num);

    return 0;

}