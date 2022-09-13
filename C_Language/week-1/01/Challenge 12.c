#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the value of x \n");
    scanf("%d", &x);

    int a, b, c;

    a = x / 100;
    b = x / 10 - (a*10);
    c = x - (a*100) - (b*10);


    printf("The inverse of %d is %d%d%d", x, c, b, a);
}
