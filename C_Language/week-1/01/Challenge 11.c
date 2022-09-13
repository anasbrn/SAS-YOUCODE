#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, languor, circumference;
    printf("Enter the length of the rectangle : \n");
    scanf("%f", &length);

    printf("Enter the languor of the rectangle : \n");
    scanf("%f", &languor);

    circumference = 2*(languor + length);

    printf("The circumference of the circle is %.2f", circumference);


}
