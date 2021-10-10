#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=-1,N;
    do
    {
        printf("Entrer un nombre entier positif:");
        scanf("%d",&N);
        if (0<=N)
            n=1;
    } while (n==-1);
}
