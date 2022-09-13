#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, s;
    float m;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    printf("Enter the value of c \n");
    scanf("%d", &c);

    printf("Enter the value of d \n");
    scanf("%d", &d);

    s=a+b+c+d;
    m=s/4;

    printf("The moyen of %d is %.2f",s,m);
}
