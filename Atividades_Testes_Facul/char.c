#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/*
strlen(x) - Retorna o tamanho da string x
strcpy(x, y) - Copia a string y para a string x
strcat(x, y) - Concatena a string y no final da string x
strcmp(x, y) - Compara as strings x e y
strlwr(x) - Converte todos os caracteres da string x para minúsculo
strupr(x) - Converte todos os caracteres da string x para maiúsculo
strchr(x, c) - Retorna um ponteiro para a primeira ocorrência do caractere c na string x   
strstr(x, y) - Retorna um ponteiro para a primeira ocorrência da string y na string x
*/
int main() {
    char nome[10],sobreN[30], MaeNC[50],PaiNC[50];
    char continuar;
    system("clear");

    while (continuar != 's')
    {    
        printf("Digite seu nome: ");
        fgets(nome,30,stdin);
        printf(" %s\n", nome);
        nome[strcspn(nome, "\n")] = 0;

        printf("Escreva seu sobrenome: ");
        fgets(sobreN,30,stdin);
        sobreN[strcspn(sobreN, "\n")] = 0; // Remove o caractere de nova linha lido pelo fgets)]

        printf("%s\n", sobreN);

        printf("Escreva o nome completo da sua Mãe: ");
        fgets(MaeNC,60,stdin);
        MaeNC[strcspn(MaeNC, "\n")] = 0;
    
        printf("Escreva o nome completo do seu Pai: ");
        fgets(PaiNC,60,stdin);
        PaiNC[strcspn(PaiNC, "\n")] = 0;

        printf("Seu nome é %s e seu sobrenome é %s.\n", nome, sobreN);

        printf("O nome completo da sua Mãe é %s.\n", MaeNC);

        printf("E o nome completo do seu Pai é %s.\n", PaiNC);

        printf("Podemos continuar? (s/n)");
        scanf(" %c", &continuar);
    
    }

        printf("Olá %s %s filho de %s e %s é um prazer te conhecer!\n", nome, sobreN, MaeNC, PaiNC);
   

    return 0;

}