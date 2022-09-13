#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    printf("Enter the value of the number \n");
    scanf("%f", &number);

    if ( number > 0 ) {
        printf("The number is positive");
    }

    else if ( number < 0 ) {
        printf("The number is negative");
    }

    else {
        printf("The number is null");
    }
    return 0;
}
