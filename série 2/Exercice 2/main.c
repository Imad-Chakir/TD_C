#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B;
    printf("les valeurs des coefficients A et B:");
    scanf("%f%f",&A,&B);
    if (A==0)
    {
        if (B==0)
            printf("l'ensemble des solutions de l'equation est l'ensemble R.");
        if (B!=0)
            printf("l'équation n'admet aucune solution sur R.");
    }
    if (A!=0)
        printf("l'equation admet une unique solution: %f",B/A);
}
