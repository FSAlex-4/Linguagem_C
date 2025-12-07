#include <stdio.h>
 
int main()
{
     int y = 15;
     int z = 15;
 
     while (y >= 0){
         y--;
         printf("While ");
     }
 
     do{
        printf("Do While ");
        z--;
      }while(z > 0);
}