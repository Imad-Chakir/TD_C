#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p2 , p1, S;
    printf("Donner la somme d'argent:");
    scanf("%d",&S);
    p2=S/2;
    p1=S-2*p2;
    printf("La somme d'argent en piece de 1 et 2 est:%d piece de 2 et %d piece de 1",p2,p1);
}
