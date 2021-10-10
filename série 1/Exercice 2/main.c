#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, R;
    #define pi 3.14
    printf("Donner le rayon du cercle:");
    scanf("%f",&R);
    P=2*pi*R;
    printf("le perimetre du cercle est:%f",P);
}
