#include <stdio.h>
#include <stdlib.h>

int a;
int f(int a);
int main()
{
    printf("Entrer le nombre:");
    scanf("%d",&a);
    return f(a);
}

int f(a)
{
    int i;
    for (i=0;i<11;i++)
        printf("%d*%d=%d\n",a,i,a*i);
    return;
}
