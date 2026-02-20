/* SIntaxe:
    scanf(<form.>, &<v1>, &<v2>,...)*/
/*Uso :1 ou N variáveis*/


#include <stdio.h>

int main()
{

    int n1,n2;
    
    printf("Manda dois numero agora patrão:");
    scanf("%d%d", &n1, &n2);
    printf("Bom mano com os numeros %d e %d somando eles fica = %d\n",n1,n2,n1 + n2);

    return 0;

}


/*        ESPECIFICADORES DE FORMATO:printf()
 Digito          Descrição                                             */
/*d ou i   Números em Base Decimal
    X    Números inteiros base hexadecimal
    f    Números decimais(. flutuante)
    e    Números em notação Científica(com casa decimal)
    c    Caracteres alfanuméricos(texto)
    s    Sequeência de caracteres alfanúmericos(texto)
[^chars] Lê todos os dados digitados, exceto os especificados em "chars"  */