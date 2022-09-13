#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x, x1, x2;
    printf("Enter the value of a \n");
    scanf("%f", &a);

    printf("Enter the value of b \n");
    scanf("%f", &b);

    printf("Enter the value of c \n");
    scanf("%f", &c);

    delta = pow(b, 2) - (4*a*c);

    if ( delta==0 ) {
        x = (-b)/(2*a);
        printf("The solution of equation is %f", x);
    }

    else if ( delta > 0 ) {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("The solution of equation is %f or %f", x1, x2);

}
    else {
        printf("The solution of equation is not real");
    }

    return 0;
}
