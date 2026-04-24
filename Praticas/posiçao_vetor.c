#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50}; // Inicializa vetor com 5 posições
    int i;

    printf("Posição : Conteúdo\n");
    for(i = 0; i < 5; i++) {
        // %d imprime o índice (i) e o valor (vetor[i])
        printf("vetor[%d] : %d\n", i, vetor[i]);
    }

    return 0;
}
