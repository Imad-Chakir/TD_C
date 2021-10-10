#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,m=0;

    printf("Entrer le premier terme de la serie entiere:");
    scanf("%d",&n);

    if (n!=0)
    {   while (m==0)
        {
            printf("Entrer le terme suivant de la serie:");
            scanf("%d",&s);
            n=s+n;
            if (s==0)
                m=1;
        }
    }
    printf("%d",n);
}
