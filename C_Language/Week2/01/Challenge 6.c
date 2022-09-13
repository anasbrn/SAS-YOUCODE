#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,p,premier;
    printf("Donnez un entier: ");
    scanf("%d",&n);

    for(p=2;p<=n;p++)
    {
        premier=1;
        for(i=2;i<p;i++)
        {
            if(p%i==0) {premier=0; break; }
        }
        if(premier==1) printf("%d ",p);
    }
    printf(" sont les nombres premiers inferieures a %d \n", n);
    system("pause");
    return 0;
}
