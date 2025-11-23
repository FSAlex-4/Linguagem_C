#include <stdio.h>

int main() {
    int i, n;
    float valor, soma = 0;

    printf("Quantos produtos deseja registrar? ");
    scanf("%d", &n);

for (i = 1;  i <= n; i++){
    
        printf("Preco do produto %d: ", i);
        scanf("%f", &valor);
        soma += valor;

    }

    printf("Valor total da compra: %.2f\n",  soma);
    return 0;
}