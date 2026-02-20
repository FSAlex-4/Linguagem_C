/*Similar ao while
Diferença crucial:
SIntaxe mais complexa
Tudo fica embutido no comando*/
/*Sintaxe:
    for(<ici.>; <cond.>; <incr.>){
        <bloco_de_comandos>
        }*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    
 
    return 0;

}