#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    system("clear");

    printf("DIgite um número entre 0 e 255: ");
    scanf("%d", &num);
    printf("O número que você digitou foi %d e seu caractere correspondente na tabela ASCII é '%c'\n", num, (char)num);
    printf("O proximo número é %d e seu caracter corrspondente com a tabela ASCII é '%c'\n", (num+1), (char)(num+1));

    return 0;
}