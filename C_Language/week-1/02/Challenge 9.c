#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Entrer un caract�re :");
    scanf("%c",&c);


    if ( c>=65 && c<=90 ) {
        printf("Le caract�re fait partie des alphabets \n");
        printf("Le caract�re est majiscule \n");
    }

    else if (c >= 97 && c <= 122) {
        printf("Le caract�re fait partie des alphabets \n");
        printf("Le caract�re est miniscule \n");
    }

    else
        printf("Le caract�re n'est pas un alphabet");
    return 0;
}
