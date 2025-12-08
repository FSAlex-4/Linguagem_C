#include <stdio.h>

int main(void)
{
    int idade;

    printf("Quantos anos tu tem meu nobre? \n");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Pelo visto estou falando com um adulto não preciso me segurar então..."); 
    }else{
            printf("Então você tem %d anos de idade percebo que ainda é mulek hehe...\n",idade);
        }   
                        /*Estrutura de um código usando if e esle(se e senão) atentar co o posicionamento das chaves*/
              
    return 0; 
}

