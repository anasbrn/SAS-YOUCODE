#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2, a, b;
    float AB, AC, BC;
    printf("Entrer x1 et y1 \n");
    scanf("%d%d",&x1, &y1);

    printf("Entrer x2 et y2 \n");
    scanf("%d%d",&x2, &y2);

    printf("Entrer a et b");
    scanf("%d%d", &a, &b);

    AC = sqrt(pow((x1-1), 2) + pow((y1-b), 2));
    BC = sqrt(pow((x2-1), 2) + pow((y2-b), 2));
    AB = sqrt(pow((x1-x2), 2) + pow((y1-y2),2));

    if (AB = AC + BC) {
        printf("Le point est sur le segment");

    }
    else
        printf("Le point n'est pas sur le segment");
    return 0;
}
