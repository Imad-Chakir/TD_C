#include <stdio.h>
#include <stdlib.h>

float r,h;
double f(float r,float h);

int main()
{
    printf("Entrer le rayon du cylindre:");
    scanf("%f",&r);
    printf("Entrer la hauteur du cylindre:");
    scanf("%f",&h);
    printf("le volume du cylindre est: %f",f(r,h));
}

double  f(float r,float h)
{
    return 2*r*3.14*h;
}
