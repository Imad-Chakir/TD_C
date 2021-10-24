#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* ptr;
    int n=999,m=0;
    ptr=calloc(n+1,sizeof(char));
    printf("Entrer la chaine:");
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
    printf("la longueur de la chaine est:%d",m);
}
