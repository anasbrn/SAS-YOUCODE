#include <stdio.h>
#include <stdlib.h>

int main()
{

    char firstname[10], lastname[10], sexe[10];
    int age, phonenumber;

    printf("Enter your firstname : \n");
    scanf("%s",firstname);

    printf("Enter your lastname : \n");
    scanf("%s", lastname);

    printf("What is your sexe : \n");
    scanf("%s", sexe);

    printf("Enter your age : \n");
    scanf("%d", &age);

    printf("Enter your phonenumber : \n");
    scanf("%d", &phonenumber);

    printf("Hello %s %s, your sexe is %s, you have %d years old, and your phone number is %d",firstname, lastname, sexe, age, phonenumber);




}
