#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Entrer le nombre N:");
    scanf("%d",&n);
    for(i=n ; 0<=i ; i--)
    {
        printf(" %d .",i);
    }
}
