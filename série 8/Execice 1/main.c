#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, x;
    printf("Entrer la taille du tableau:");
    scanf("%d",&N);
    printf("Entrer le nombre x :");
    scanf("%d",&x);
    int T[N], n=0, m,i;
    for (i=0;i<N;i++)
    {
        printf("Entrer le %d nombre de la table:",i+1);
        scanf("%d",&T[i]);
        if (T[i]==x)
        {
            n++;
            if (n==1)
                m=i;
        }
    }
    printf("la première occurence de x dans le tableau se fait au niveau du %d élément du tableau:",m+1);
    printf("le nombre d'occurence de x dans le tableau est: %d",n);
    return 0;
}
