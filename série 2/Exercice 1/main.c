#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    printf("Donner les trois entiers a ordonner:");
    scanf("%d%d%d",&A,&B,&C);
    if (A<=C)
    {
        if (B<=A)
            printf("l'ordre des trois entiers est: %d %d %d",B,A,C);
        if (C<=B)
            printf("l'ordre des trois entiers est: %d %d %d",A,C,B);
        if (A<=B && B<=C)
            printf("l'ordre des trois entiers est: %d %d %d",A,B,C);
    }
    if (C<=A)
    {
        if (B<=C)
            printf("l'ordre des trois entiers est: %d %d %d",B,C,A);
        if (A<=B)
            printf("l'ordre des trois entiers est: %d %d %d",C,A,B);
        if (C<=B && B<=A)
            printf("l'ordre des trois entiers est: %d %d %d",C,B,A);
    }

}
