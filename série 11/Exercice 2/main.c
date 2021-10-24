#include <stdio.h>
#include <stdlib.h>

float r;
double f(float r);

int main()
{
    printf("Entrer le rayon du disque:");
    scanf("%f",&r);
    printf("la surface du disque est: %f",f(r));
}

double  f(float r)
{
    return 2*r*3.14;
}
