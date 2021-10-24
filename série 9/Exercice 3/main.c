#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr,*L;
    int n=999,m=0,i;
    ptr=calloc(n+1,sizeof(char));
    printf("Entrer la chaine à copier:");
    gets(ptr);
    while (ptr[n]!='\0')
    {
        n=n+100;
        ptr=calloc(n+1,sizeof(char));
        printf("Entrer la chaine une autre fois:");
        gets(ptr);
    }
    while (ptr[m]!='\0')
        m++;
    L=calloc(m,sizeof(char));
    for (i=0;i<m;i++)
        L[i]=ptr[m-i-1];
    printf("%s",L);
}
