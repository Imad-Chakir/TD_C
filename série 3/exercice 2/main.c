#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,J,M,d=0;
    printf("Entrer l'annee:");
    scanf("%d",&A);
    printf("Entrer le jour:");
    scanf("%d",&J);
    printf("Entrer le mois:");
    scanf("%d",&M);
    if ((A%4==0 && A%100!=0) || (A%400==0))
        d=1;
    switch(M)
    {
        case 1: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",J,J,M,A);break;
        case 2: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31+J,J,M,A);break;
        case 3: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31+28+d+J,J,M,A);break;
        case 4: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*2+28+d+J,J,M,A);break;
        case 5: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*2+28+30+d+J,J,M,A);break;
        case 6: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*3+28+30+d+J,J,M,A);break;
        case 7: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*3+28+30*2+d+J,J,M,A);break;
        case 8: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*4+28+30*2+d+J,J,M,A);break;
        case 9: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*5+28+30*2+d+J,J,M,A);break;
        case 10: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*5+28+30*3+d+J,J,M,A);break;
        case 11: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*6+28+30*3+d+J,J,M,A);break;
        case 12: printf("il y a %d jours qui se sont ecoule depuis le %d/%d/%d.",31*6+28+30*4+d+J,J,M,A);break;
    }

}
