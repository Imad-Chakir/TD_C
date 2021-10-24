#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R,n=0;
    char c[4];
    while(n==0 || n==2)
    {
        if (n==0)
        {
            printf("voulez vous obtenir le perimetre d'un cercle?(Repondez par \'Oui\' ou \'Non\')");
            scanf("%s",&c);
        }

        if (strcmp(c,"Oui")==0 || strcmp(c,"oui")==0)
        {
            printf("Entrer le rayon du cecle:",R);
            scanf("%d",&R);
            printf("le perimetre du cercle est: %f\n",2*3.14*R);
            n=0;
            continue;
        }
        else if (strcmp(c,"Non")==0 || strcmp(c,"non")==0)
            break;

        else
        {   printf("La reponse est incorrecte.Repondez par \'Oui\' ou \'Non\'.\n");
            scanf("%s",&c);
            n=2;
        }

    }
}
