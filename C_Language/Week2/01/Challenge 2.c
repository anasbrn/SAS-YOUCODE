#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, ligne, space;
    printf("Entrer le nombre de lignes \n");
    scanf("%d", &ligne);

    for (i=0;i<=ligne;i++) {
        for (space=1; space<=ligne-i; space++) {
            printf(" ");
        }
        for (j=1; j<= i*2-1; j++) {
            printf("*");
    }
        printf("\n");
    }

    return 0;
}
