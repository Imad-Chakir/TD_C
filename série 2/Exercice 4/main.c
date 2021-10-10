#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    int A;
    printf("Donner le chiffre:");
    scanf("%d",&A);
    switch(A)
    {
        case 0:printf("zéro");break;
        case 1:printf("un");break;
        case 2:printf("deux");break;
        case 3:printf("trois");break;
        case 4:printf("quatre");break;
        case 5:printf("cinq");break;
        case 6:printf("six");break;
        case 7:printf("sept");break;
        case 8:printf("huit");break;
        case 9:printf("neuf");break;
    }
}
