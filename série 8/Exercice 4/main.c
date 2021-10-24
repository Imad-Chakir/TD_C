#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer la taille du tableau:");
    scanf("%d",&N);
    int T[N],i,j,k,n;
    for (i=0;i<N;i++)
    {
        printf("Entrer la %d élément du tableau:",i+1);
        scanf("%d",&T[i]);
    }
    for (j=0;j<N-1;j++)
        for (i=0;i<N-1;i++)
            if (T[i]>T[i+1])
            {
                n=T[i];
                T[i]=T[i+1];
                T[i+1]=n;
            }
    printf("le tablau trié:");
    for (i=0;i<N;i++)
    {
        printf(" %d ;",T[i]);
    }


    return 0;
}
