#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    printf("Entrer la taille N du tableau:");
    scanf("%d",&N);
    int T[N],i;
    for (i=0;i<N;i++)
    {
        printf("Entrer le %d element du tableau:",i+1);
        scanf("%d",&T[i]);
        if (T[i]>=150)
            T[i]=T[i]*1.1;
    }
    for (i=0;i<N;i++)
        printf(" %d ;",T[i]);
}
