#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer le nombre N d'element du projet:");
    scanf("%d",&N);
    int a=0,i=0,T[N],j=0,T1[N],T2[N];
    while (i<N)
    {
        printf("Entrer le %d element du tableau:",i+1);
        scanf("%d",&T[i]);
        T1[i]=0;T2[i]=0;
        if (T[i]%2==1)
        {
            T1[j]=T[i];
            j++;
        }
        else
        {
            T2[a]=T[i];
            a++;
        }
        i++;
    }
    printf("\nLa longueur de T1 est:%d",j);
    printf("\nLa longueur de T2 est:%d",a);
    printf("\nLes elements de T1 sont:");
    while(j!=0)
    {
        j--;
        printf(" %d ;",T1[j]);
    }
    printf("\nLes elements de T2 sont:");
    while(a!=0)
    {
        a--;
        printf(" %d ;",T2[a]);
    }
}

