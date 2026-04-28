#include <stdio.h>
#include <stdio.h>
void Soma(int *a, int *b)
{
    *a = *a + 1;
    *b = *b + 1;
    printf("A soma vale %d \n", *a + *b);
}
int main()
{
    int x, y ;
    x = 4;
    y = 8;
    Soma(&x, &y);
    printf(" O valor de x é %d e o valor de y é %d\n", x, y);
    return 0;

}