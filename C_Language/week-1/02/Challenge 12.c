#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, h2, m1, m2, s1, s2;
    printf("Entrer le premier instant  \n");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrer le deuxième instant  \n");
    scanf("%d:%d:%d", &h2, &m2, &s2);


    if ( h1<h2 || m1<m2 || s1<s2) {
        printf("Le premier instant vient avant le deuxième");
    }
    else if ( h2<h1 || m2<m1 || s2<s1) {
        printf("Le deuxième instant vient avant le premier");
    }
    else {
        printf("il s'agit du même instant");
    }
    return 0;
}
