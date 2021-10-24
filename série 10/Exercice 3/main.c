#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    printf("Donner la taille de la matrice:");
    scanf("%d",&n);
    int M[n][n];
    int i,j;
    for (i=0;i<n;i++)
        for (j=i;j<n;j++)
        {
            printf("Entrer l'element de la %d ligne et la %d colonne de la matrice:",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    for (i=0;i<n;i++)
        for (j=i;j<n;j++)
            s=s+M[i][j];
    printf("la somme de lamoitié supérieur de la matrice est: %d ",s);

}
