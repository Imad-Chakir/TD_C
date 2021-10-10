#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m=0, s=0;
    char c[4];
    printf("Entrer le nombre entier:");
    scanf("%d",&s);
    while (m==0)
    {
       printf("voulez-vous entrer un autre nombre?(répondre par \'Oui\' ou \'Non\')");
       scanf("%s",&c);
        if (strcmp(c,"oui")==0)
        {   printf("Entrer le nombre entier suivant:");
            scanf("%d",&n);
            s=s+n;
        }
        else if (strcmp(c,"Non")==0)
            m=1;
        else
            printf("la réponse est incorrect. Répondez par \'Oui\' ou \'Non\' \n");


    }
    printf("%d",s);
}
