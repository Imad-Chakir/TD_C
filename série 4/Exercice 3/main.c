#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ;
    printf("Entrer le nombre N:");
    scanf("%d",&n);
    printf("les nombre impaires entre 1 et N sont:");
    for(i=1;i<=n;i++)
    {
        if (i%2==1)
            printf(" %d ,",i);
    }
}
