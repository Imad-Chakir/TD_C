#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    printf("Entrer  le nombre x:");
    scanf("%d",&x);
    printf("Entrer  le nombre y:");
    scanf("%d",&y);
    if (x<y)
        n=y;
    else
    {   n=x;
        x=y;
    }
    y=1;
    while (y!=0)
    {
        y=n%x;
        n=x;
        x=y;

    }
    printf("Le PGCD de x et y est:%d",n);

}
