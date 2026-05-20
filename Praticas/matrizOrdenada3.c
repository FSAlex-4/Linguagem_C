#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    int matriz[3][3];
    int i, j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i == j )
            {
                matriz[i][j]= 1;
            }
            else
            {
                matriz[i][j]= 0;
            }
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
             printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    
 return 0;

}