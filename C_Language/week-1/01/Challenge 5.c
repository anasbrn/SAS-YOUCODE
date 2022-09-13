#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, C;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%d", &F);

    C = (F-32)/1.8;

    printf("the temperature in Celsius is %d \n", C);

    if ( C <= 0 ) {
        printf("très froid \n");
    }

    else if ( C <= 25 ) {
        printf("froid \n");
    }

    else if ( C < 25 && C < 40 ) {
        printf("chaud \n");
    }

    else if ( C >= 40) {
        printf("très chaud \n");
}


}
