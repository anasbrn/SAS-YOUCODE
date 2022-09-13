#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metre, km, mile;

    printf("Enter the distance in mile : \n");
    scanf("%f", &mile);

    km = metre / 1000;
    km = mile / 1.609;
    metre = mile*1609;


    printf("The distance in metre is %f", metre);




}


