#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    printf("Entrer le nombre des notes a introduire:");
    scanf("%d",&N);
    if (N==0)
    {
        printf("la moyenne des notes est 0 .");
        return;
    }
    int T[N],i;
    float E=0,E1=0,b,a=0;
    for (i=0;i<N;i++)
    {
        printf("Entrer le %d note:",i+1);
        scanf("%d",&T[i]);
        a=a+T[i];
        E=a/N;
    }
    printf("\nla moyenne des notes est: %f ", E);
    for (i=0;i<N;i++)
    {
        b=fabs(T[i]-E);
        if (E1<b)
            E1=b;
    }
    printf("\n\nL'ecart type est: %f",E1);

    int m,o,L[2];
    o=fabs(T[0]-E);
    for (m=0;m<strlen(T);m++)
    {
        if (o<fabs(T[m]-E))
            L[0]=T[m];
        else if (o==fabs(T[m]-E))
            L[1]=T[m];
    }
    if (L[1]!=L[0] && fabs(L[1]-E)==fabs(E-L[0]))
        printf("\nil exixte deux note qui s'écarte le plus de la moyenne: %d et %d",L[1],L[0]);
    else
        printf("\nla note qui s'écarte le plus de la moyenne est: %d",L[0]);

}
