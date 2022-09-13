#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ,s, m, r;
    float d;
    printf("Enter the value of a and b : ");
    scanf("%d", "%d", &a, &b);

    s=a+b;
    m=a*b;
    d=a/b;
    r=a%b;

    printf("%d + %d = %d \n", a, b, s);
    printf("%d * %d = %d \n", a, b, m);
    printf("%d / %d = %f \n", a, b, d);
    printf("the rest of %d / %d = %d \n\n", a, b, r);

}
