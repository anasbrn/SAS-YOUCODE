#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi, r, c;

    printf("Enter the ray of the circle : \n");
    scanf("%f", &r);

    pi = 3.14;
    c = pi * 2 * r;

    printf("The circumference of the circle is %f", c);

}
