#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m=0;
    printf("Donner la taille de la matrice:");
    scanf("%d",&n);
    int M[n][n];
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la première matrice:",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    for (i=0;i<n;i++)
        for (j=0;j<i;j++)
            if (M[i][j]!=M[j][i])
            {
                printf("la matrice n'est pas symétrique.");
                m=1;
            }
    if (m==0)
        printf("la matrice est symétrique.");


}
