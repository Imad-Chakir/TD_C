#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N;
    printf("Entrer le nombre N:");
    scanf("%d",&N);

    for(i=0;i<=N;i++)
    {
        for(j=0;j<=N;j++)
        {
            printf(" %d*%d=%d |",i,j,i*j);
        }
        printf("\n");
    }
}
