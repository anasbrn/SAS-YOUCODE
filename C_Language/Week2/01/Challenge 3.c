#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, premier;
    printf("Entrer un nombre :");
    scanf("%d", &number);

   premier =1;

    for (i=2;i<number;i++) {
        if (number % i == 0)
        {
            premier=0;
            break;
        }
    }
    if (premier==1) {
        printf("Le nombre est premier \n");
    }
    else{
        printf("Le nombre n'est pas premier \n");
    }
    return 0;
}
