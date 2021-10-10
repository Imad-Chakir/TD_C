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
    printf("le quotient de a et b est:%d \n",a/b);
    printf("le reste de a et b est:%d",a%b);

}
