#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=10;
    int i,j;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            printf(" %d ;",i*j);
        }
        printf("\n");
    }
}
