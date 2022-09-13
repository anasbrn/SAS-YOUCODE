#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metre, mile, km;

    printf("Enter the distance in metre : \n");
    scanf("%f", &metre);

    km = metre / 1000;
    km = mile / 1.609;

    printf("The distance in mile is %f ", mile);
}
