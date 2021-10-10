#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,m=0,a,b=0;
    char c[4];

    do
    {
        printf("voulez vous entrer un entier?(Repondre par \'Oui\' ou \'Non\') ");
        scanf("%s",&c);
        n=strcmp(c,"Non");
        s=strcmp(c,"Oui");
        if (s==0)
        {   printf("Entrer le entier:");
            scanf("%d",&a);
            m=m+a;
        }
        else if (n==0)
        {   printf("la somme du serie d'entiers donnee est: %d",m);
            b=1;
        }
        else
            printf("la reponse est incorrecte. Repondez par \'Oui\' ou \'Non\'");
    } while(b==0);
}
