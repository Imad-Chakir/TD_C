#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    printf("Entrer le nombre entier positif a:");
    scanf("%d",&a);
    printf("Entrer le nombre entier positif b:");
    scanf("%d",&b);
    if (a<b)
    {
        n=a;a=b;b=n;
    }

    if (b==0)
        printf("impossible de diviser par 0.\n");
    else
    {
        n=0;
        while (a>=b)
        {
            a=a-b;
            n=n+1;
        }
        printf("le quotient de a et b est:%d \n",n);
        printf("le reste de a et b est:%d",a);
    }
}
