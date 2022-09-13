#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int F, C;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%d", &F);
    C =(F-32)/1.8;
    printf("Temperature in Celsius is %d", C);

}
