#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v;
    printf("Enter a caracter \n");
    scanf("%c", &v);

    switch (v){
        case 'a' :
            printf("The caracter is vowel");
            break;

        case 'e' :
            printf("The caracter is vowel");
            break;

        case 'i' :
            printf("The caracter is vowel");
            break;

        case 'u' :
            printf("The caracter is vowel");
            break;

        case 'y' :
            printf("The caracter is vowel");
            break;


        default :
            printf("The caractere is not vowel");
            break;
    }


    return 0;
}
