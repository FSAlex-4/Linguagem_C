#include <stdio.h>
#include <stdlib.h>

void pmatriz(int (*matriz)[4], int *e) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (*e == 1) {
                printf("%3d ", matriz[i][j]);
            }
            else if (*e == 2) {
                if (i == j) {
                    printf("%3d ", matriz[i][j]);
                }
                else
                    printf(" ");
            }
            else if (*e == 3) {
                if (i < j) {
                    printf("%3d ", matriz[i][j]);
                }
                else
                    printf(" ");
            }
            else if (*e == 4) {
                if (i > j) {
                    printf("%3d ", matriz[i][j]);
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return;
 }
int main()
{ 
    system("clear");

    int escolha = 0, i, j;
  int m[4][4];  

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
        m[i][j] = rand() % 50;
    }
}
printf("-------------------------------\n");
printf("escolha uma opção: \n");
while (escolha != 5)
{   printf("Mostrar a Matriz: 1\n");
    printf("Diagonal Principal: 2\n");
    printf("Triângulo Superior: 3\n");
    printf("Triângulo Inferior 4 \n");
    printf("Sair: 5\n");
scanf("%d", &escolha);
switch (escolha)
{
    case 1:pmatriz(m, &escolha);
    break;

    case 2:pmatriz(m, &escolha);
    break;

    case 3:pmatriz(m, &escolha);
    break;

    case 4:pmatriz(m, &escolha);
    break;

    case 5: printf("Saindo do programa...\n");
}
}
return 0;
}