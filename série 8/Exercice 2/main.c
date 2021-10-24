#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,M,n=0;
    printf("Entrer la taille N du tableau:");
    scanf("%d",&N);
    int T[N];
    printf("Entrer le 1 nombre de la table:");
    scanf("%d",&T[i]);
    M=T[0];
    for (i=1;i<N;i++)
    {
        printf("Entrer le %d nombre de la table:",i+1);
        scanf("%d",&T[i]);
        if (T[i]>M)
        {
            M=T[i];
            if (T[i]!=T[n])
            n=i;
        }
    }
    printf("le maximum dans le tableau est: %d\n",M);
    printf("la première position du maximum dans le tableau est: %d",n+1);
    return 0;
}
