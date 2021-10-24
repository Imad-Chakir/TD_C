#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Donner le nombre des colonnes de la matrice:");
    scanf("%d",&m);
    printf("Donner le nombre des lignes de la matrice:");
    scanf("%d",&n);
    int M1[n][m],M2[n][m];
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la première matrice:",i+1,j+1);
            scanf("%d",&M1[i][j]);
        }
    printf("\n\n");
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la deuxième matrice:",i+1,j+1);
            scanf("%d",&M2[i][j]);
        }
    printf("\n\n");
    printf("la somme des deux matrices est:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf(" %d ,",M1[i][j]+M2[i][j]);
        }
        printf("\n");
    }

}
