#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,max,somme;
    for (i=0;i<=8;i++) {
        printf("Entrer les nombres :");
        scanf("%d",&n);
            if (n>100) {
        printf("S'il vous plait entrer un nombre infèrieur à 100 \n");
        }

        somme=somme+n;
        if (n>=max) {
            max=n;
        }
    }

    printf ("le somme est %d \n",somme);
    printf ("le max est %d \n",max);



    return 0;
}
