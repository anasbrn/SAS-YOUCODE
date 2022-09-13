#include <stdio.h>
#include <stdlib.h>

int main()
{
    int un, ui, uj, i, n;
    do
    { printf("Entrer la valeur de n :");
    scanf("%d", &n);
    }
    while ( n < 2);
    ui=1;
    uj=1;

    for (i=2;i<=n;i++) {
            un=ui+uj;

    }
    printf("un=%d", un);
    return 0;
}
