#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void antipatico(char nome[10])
{   nome = "Kevin";
    printf("Seu nome é %s\n", nome);
}
void entendi(char *Resposta)
{
    if (strcmp(Resposta, "Não") == 0)
    {
        printf("Foi oq eu acabei de dizer uai\n");
        antipatico(Resposta);
    }
}
void agoraSim(char *Resposta)
{
    if (strcmp(Resposta, "Não") == 0)
    {   
        printf("Agora sim, entendi o que você quis dizer\n");
        antipatico(Resposta);
    }
}
int main()
{   system("clear");
    char Nome[10];
    char resposta[6];
    printf("Olá qual o seu nome?\n ");
    scanf("%s",Nome);
    antipatico(Nome);
    scanf("%s", resposta);
    entendi(resposta);
    scanf("%s", resposta);
    agoraSim(resposta);
    printf("Parece que nem percebe o que tá escrevendo eu hein\n");
    return 0;


}