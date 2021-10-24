#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,l,k;
    printf("Donner le nombre des colonnes de la première matrice:");
    scanf("%d",&m);
    printf("Donner le nombre des lignes de la première matrice:");
    scanf("%d",&n);
    printf("Donner le nombre des lignes de la deuxième matrice:");
    scanf("%d",&l);
    printf("Donner le nombre des colonnes de la deuxième matrice:");
    scanf("%d",&k);
    if (l!=m && n!=k)
    {
        printf("impossible de calculer le produit des deux matrices");
        exit;
    }
    int M1[n][m],M2[l][k];
    int i,j,c,a=0;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la première matrice:",i+1,j+1);
            scanf("%d",&M1[i][j]);
        }
    printf("\n\n");
    for (i=0;i<l;i++)
        for (j=0;j<k;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la deuxième matrice:",i+1,j+1);
            scanf("%d",&M2[i][j]);
        }
    if (l==m)
    {
        for (i=0;i<n;i++)
        {
            for (j=0;j<k;j++)
            {
                for (c=0;c<l;c++)
                {
                    a=a+M1[i][c]*M2[c][j];
                }
                printf(" %d ,",a);
                a=0;
            }
            printf("\n");
        }
    }
    else if (k==n || l!=m)
    {
        for (i=0;i<l;i++)
        {
            for (j=0;j<m;j++)
            {
                for (c=0;c<n;c++)
                {
                    a=a+M1[i][c]*M2[c][j];
                }
                printf(" %d ,",a);
                a=0;
            }
            printf("\n");
        }
    }
}
