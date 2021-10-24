#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,m=1,i;
    printf("Entrer  le nombre x:");
    scanf("%d",&x);
    printf("Entrer  le nombre y:");
    scanf("%d",&y);
    for (i=0;i<y;i++)
    {
        m=m*x;
    }
    printf("%d",m);
}
