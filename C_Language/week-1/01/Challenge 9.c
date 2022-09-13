#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    float distance;

    printf("enter the first point \n");
    printf("x1 = ");
    scanf("%d", &x1);
    printf("x2 = ");
    scanf("%d", &x2);

    printf("enter the second point \n");
    printf("y1 = ");
    scanf("%d", &x1);
    printf("y2 = ");
    scanf("%d", &x2);

    distance = sqrt(pow((x2-x1) ,2) + pow((y2-y1) ,2));
    printf("the distance between the first and the second point is %.2f", distance);



}
