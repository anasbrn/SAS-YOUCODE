#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne;
    printf("Entrer la moyenne d'�l�ve : \n");
    scanf("%d", &moyenne);


    if (moyenne<10) {
        printf("recal�");
    }

    else if (moyenne >= 10 && moyenne < 12) {
        printf("passable");
    }

    else if (moyenne >= 12 && moyenne < 14) {
        printf("assez bien");
    }

    else if (moyenne >= 14 && moyenne <16) {
        printf("bien");
    }

    else
        printf("tr�s bien");
    return 0;
}
