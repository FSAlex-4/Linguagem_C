#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char v[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void mostravelha(char tabuleiro[3][3])
{
    int i, j;

    printf("\n");
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
}

void mudaJogador(char *Simbolo)
{
    if (*Simbolo == 'X')
        *Simbolo = 'O';
    else
        *Simbolo = 'X';
}

bool Jogar(char S, int P)
{
    int linha, coluna;

    // converte posição 1-9 para linha e coluna
    linha = (P - 1) / 3;
    coluna = (P - 1) % 3;

    // valida posição
    if (P < 1 || P > 9)
        return false;

    // verifica se está vazio
    if (v[linha][coluna] == ' ')
    {
        v[linha][coluna] = S;
        return true;
    }

    return false;
}

bool TerminouVelha()
{
    int L, C;
    int vazios = 0;

    // linhas
    for (L = 0; L < 3; L++)
    {
        if ((v[L][0] == v[L][1]) &&
            (v[L][1] == v[L][2]) &&
            (v[L][0] != ' '))
        {
            return true;
        }
    }

    // colunas
    for (C = 0; C < 3; C++)
    {
        if ((v[0][C] == v[1][C]) &&
            (v[1][C] == v[2][C]) &&
            (v[0][C] != ' '))
        {
            return true;
        }
    }

    // diagonal principal
    if ((v[0][0] == v[1][1]) &&
        (v[1][1] == v[2][2]) &&
        (v[0][0] != ' '))
    {
        return true;
    }

    // diagonal secundária
    if ((v[0][2] == v[1][1]) &&
        (v[1][1] == v[2][0]) &&
        (v[0][2] != ' '))
    {
        return true;
    }

    // verifica empate
    for (L = 0; L < 3; L++)
    {
        for (C = 0; C < 3; C++)
        {
            if (v[L][C] == ' ')
                vazios++;
        }
    }

    if (vazios == 0)
    {
        printf("Deu velha!\n");
        return true;
    }

    return false;
}

int main()
{
    char Simbolo = 'X';
    int Posicao;
    bool jogoTerminado = false;

    while (!jogoTerminado)
    {
        system("clear");

        mostravelha(v);

        printf("Jogador %c\n", Simbolo);
        printf("Escolha uma posição (1-9): ");

        scanf("%d", &Posicao);

        if (Jogar(Simbolo, Posicao))
        {
            if (TerminouVelha())
            {
                system("clear");
                mostravelha(v);

                printf("Fim de jogo!\n");
                jogoTerminado = true;
            }
            else
            {
                mudaJogador(&Simbolo);
            }
        }
        else
        {
            printf("Posição inválida!\n");
            getchar();
            getchar();
        }
    }

    return 0;
}