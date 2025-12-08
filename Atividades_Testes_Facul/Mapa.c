#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANHO_ACERVO 20   // Constante que define a quantidade máxima de livros

// ----------------------------------------------------------
// STRUCT LIVRO
// ----------------------------------------------------------
struct Livro {
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};

// ----------------------------------------------------------
// PROTÓTIPOS DAS FUNÇÕES
// ---------------------------------------------------------- 
void cadastrarLivros(struct Livro acervo[], int tamanho);
void imprimirLivros(struct Livro acervo[], int tamanho);
void pesquisarLivro(struct Livro acervo[], int tamanho, int codigoBusca);
void ordenarLivros(struct Livro acervo[], int tamanho);

// ----------------------------------------------------------
// FUNÇÃO PRINCIPAL
// ----------------------------------------------------------
int main() {

    struct Livro acervo[TAMANHO_ACERVO];  // Vetor com 20 livros
    int opcao, codigoBusca;

    system("clear");// Limopa a tela/terminal
    do {
        printf("\n===== SISTEMA DE GERENCIAMENTO DE LIVROS =====\n");
        printf("1 - Cadastrar livros\n");
        printf("2 - Imprimir todos os livros\n");
        printf("3 - Pesquisar livro por codigo\n");
        printf("4 - Ordenar livros por ano de publicacao\n");
        printf("5 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrarLivros(acervo, TAMANHO_ACERVO);
                break;

            case 2:
                imprimirLivros(acervo, TAMANHO_ACERVO);
                break;

            case 3:
                printf("Digite o codigo do livro a pesquisar: ");
                scanf("%d", &codigoBusca);
                pesquisarLivro(acervo, TAMANHO_ACERVO, codigoBusca);
                break;

            case 4:
                ordenarLivros(acervo, TAMANHO_ACERVO);
                printf("Livros ordenados por ano com sucesso!\n");
                break;

            case 5:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 5);

    return 0;
}

// ----------------------------------------------------------
// FUNÇÃO CADASTRAR LIVROS
// ----------------------------------------------------------
void cadastrarLivros(struct Livro acervo[], int tamanho) {
    printf("\n===== CADASTRAR LIVROS =====\n");

    for(int i = 0; i < tamanho; i++) {
        printf("\nLivro %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &acervo[i].codigo);

        fflush(stdin);
        printf("Titulo: ");
        fgets(acervo[i].titulo, 50, stdin);
        acervo[i].titulo[strcspn(acervo[i].titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(acervo[i].autor, 30, stdin);
        acervo[i].autor[strcspn(acervo[i].autor, "\n")] = '\0';

        printf("Area: ");
        fgets(acervo[i].area, 30, stdin);
        acervo[i].area[strcspn(acervo[i].area, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &acervo[i].ano);

        fflush(stdin);
        printf("Editora: ");
        fgets(acervo[i].editora, 30, stdin);
        acervo[i].editora[strcspn(acervo[i].editora, "\n")] = '\0';
    }
}

// ----------------------------------------------------------
// FUNÇÃO IMPRIMIR LIVROS
// ----------------------------------------------------------
void imprimirLivros(struct Livro acervo[], int tamanho) {
    printf("\n===== LISTA DE LIVROS =====\n");

    for(int i = 0; i < tamanho; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Codigo: %d\n", acervo[i].codigo);
        printf("Titulo: %s\n", acervo[i].titulo);
        printf("Autor: %s\n", acervo[i].autor);
        printf("Area: %s\n", acervo[i].area);
        printf("Ano: %d\n", acervo[i].ano);
        printf("Editora: %s\n", acervo[i].editora);
    }
}

// ----------------------------------------------------------
// FUNÇÃO PESQUISAR LIVRO
// ----------------------------------------------------------
void pesquisarLivro(struct Livro acervo[], int tamanho, int codigoBusca) {

    int i = 0;
    int encontrado = 0;

    while(i < tamanho && !encontrado) {
        if(acervo[i].codigo == codigoBusca) {
            printf("\n===== LIVRO ENCONTRADO =====\n");
            printf("Codigo: %d\n", acervo[i].codigo);
            printf("Titulo: %s\n", acervo[i].titulo);
            printf("Autor: %s\n", acervo[i].autor);
            printf("Area: %s\n", acervo[i].area);
            printf("Ano: %d\n", acervo[i].ano);
            printf("Editora: %s\n", acervo[i].editora);

            encontrado = 1;
        }
        i++;
    }

    if(!encontrado) {
        printf("\nLivro NAO encontrado!\n");
    }
}

// ----------------------------------------------------------
// FUNÇÃO ORDENAR LIVROS (BUBBLE SORT)
// ----------------------------------------------------------
void ordenarLivros(struct Livro acervo[], int tamanho) {

    struct Livro temp;

    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - i - 1; j++) {
            if(acervo[j].ano > acervo[j+1].ano) {

                temp = acervo[j];
                acervo[j] = acervo[j + 1];
                acervo[j + 1] = temp;
            }
        }
    }
}