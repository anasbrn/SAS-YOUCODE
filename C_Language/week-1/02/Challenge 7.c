#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter the caracter \n");
    scanf("%c", &c);

    printf("le code ASCII est %d \n", c);
    if ( c >= 65 && c <= 90) {
        printf("le caractère est majuscule");
    }

    else
        printf("le caractère est miniscule");





    
}
