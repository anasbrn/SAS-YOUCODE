#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Entrer la valeur de x \n");
    scanf("%d", &x);

    if ( x%2==0){
        printf("Le nombre est pair");
    }


    else {
        printf("Le nombre est impair");

    }


    return 0;
}
