#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int jour;
    srand(time(NULL));
    jour = rand();
    jour = jour%7;
    switch(jour) {
        case (1): printf("Lundi");
            break;
        case (2): printf("Mardi");
            break;
        case (3): printf("Mercredi");
            break;
        case (4): printf("Jeudi");
            break;
        case (5): printf("Vendredi");
            break;
        case (6): printf("Samedi");
            break;
        case (7): printf("Dimanche");
            break;

    }

    return 0;
}
