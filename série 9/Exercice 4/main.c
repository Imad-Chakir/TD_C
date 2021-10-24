#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr,*L;
    int n=999,m=0,i=0,j=0;
    ptr=calloc(n+1,sizeof(char));
    L=calloc(n+1,sizeof(char));
    printf("Entrer la chaine à copier:");
    gets(ptr);
    while (ptr[n]!='\0')
    {
        n=n+100;
        ptr=calloc(n+1,sizeof(char));
        L=calloc(n+1,sizeof(char));
        printf("Entrer la chaine une autre fois:");
        gets(ptr);
    }
    while (ptr[m]!='\0')
    {
        if (ptr[i]==' ')
            i++;
        else if ((ptr[m-1]!=' ' && ptr[m]==' ' && ptr[m+1]!=' ' && ptr[m+1]!='\0')||(ptr[m]!=' '))
        {
            L[j]=ptr[m];
            j++;
        }
        m++;
    }
    printf("%s",L);
}
