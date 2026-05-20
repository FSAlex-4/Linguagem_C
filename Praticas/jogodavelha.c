#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void mostravelha(char tabuleiro[3][3])
{
    int i, j;
    printf("x---x---x---x\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("| %c ", tabuleiro[i][j]);
        }
        printf("|\n");
        printf("x---x---x---x\n");
    }
    
    return;
}

void mudaJogador(char* Simbolo)
{
    
    if(*Simbolo == 'X')
    {   
        *Simbolo = 'O';
    }
    else
    {
        *Simbolo = 'X';
    }

    }
bool Jogar(char tabuleiro[3][3], char S, int P)
{   
        bool mudou = false;
        int linha = (P - 1) / 3;
        int coluna = (P - 1) % 3;
        
        if(P < 1 || P > 9)
        {
            return false;
        }
        
        if(tabuleiro[linha][coluna] == ' ')
        {
            tabuleiro[linha][coluna] = S;
            mudou = true;
        }

    return mudou;
}

bool TerminouVelha(char v[3][3])
{
    int L, C;
    int ocorr = 0;
    // Verifica linhas
    for (L = 0; L < 3; L++)
    {
        if ((v[L][0] == v[L][1]) &&
            (v[L][1] == v[L][2]) &&
            (v[L][0] != ' '))
        {
            return true;
        }
    }

    // Verifica colunas
    for (C = 0; C < 3; C++)
    {
        if ((v[0][C] == v[1][C]) &&
            (v[1][C] == v[2][C]) &&
            (v[0][C] != ' '))
        {
            return true;
        }
    }

    // Verifica diagonal principal
    if ((v[0][0] == v[1][1]) &&
        (v[1][1] == v[2][2]) &&
        (v[0][0] != ' '))
    {
        return true;
    }

    // Verifica diagonal secundária
    if ((v[0][2] == v[1][1]) &&
        (v[1][1] == v[2][0]) &&
        (v[0][2] != ' '))
    {
        return true;
    }

    // Verifica empate (velha)
    for (L = 0; L < 3; L++)
    {
        for (C = 0; C < 3; C++)
        {
            if (v[L][C] != ' ')
            {
                ocorr++;
            }
        }
    }

    // Se não há espaços vazios
    if (ocorr == 9)
    {
        return true;
    }

    return false;
}
int main()
{
    

     char v[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
     };
    char Simbolo = 'X';
    int Posicao;
    bool jogoTerminado = false;
   
    while (!jogoTerminado)
    {
        system("clear");

        mostravelha(v);
        printf("Jogador %c, escolha uma posição (1-9): ", Simbolo);
        scanf("%d", &Posicao);

        if (Jogar(v, Simbolo, Posicao))
        {
            if (TerminouVelha(v))
            {
                jogoTerminado = true;
                mostravelha(v);
                printf("Parabéns! Jogador %c venceu!\n", Simbolo);
            }
            else
            {
                mudaJogador(&Simbolo);
            }
        }
        else
        {
            printf("Posição inválida. Tente novamente.\n");
        }
    }

    return 0;
}