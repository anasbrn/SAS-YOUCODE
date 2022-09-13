#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=0, sum = 0, n;
    while ( i < 10 ) {
    ++i;
    printf("Entrer dix nombres :");
    scanf("%d", &n);
    if (n<0) continue;
    sum += n;
    }
    printf("La somme est %d", sum);

    return 0;

}
