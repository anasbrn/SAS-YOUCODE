#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Entrer un caractère :");
    scanf("%c",&c);


    if ( c>=65 && c<=90 ) {
        printf("Le caractère fait partie des alphabets \n");
        printf("Le caractère est majiscule \n");
    }

    else if (c >= 97 && c <= 122) {
        printf("Le caractère fait partie des alphabets \n");
        printf("Le caractère est miniscule \n");
    }

    else
        printf("Le caractère n'est pas un alphabet");
    return 0;
}
