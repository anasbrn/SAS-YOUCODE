#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, s;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    s=a+b;

    if ( a==b ) {
        printf("The sum is %d", s*3);
    }

    else {
        printf("The sum is %d", s);
    }

    return 0;
}
