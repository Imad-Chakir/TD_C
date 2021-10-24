#include <stdio.h>
#include <stdlib.h>

int n1,n2;
double f(int num1,int num2);

int main()
{
    printf("Entrer le premier entier:");
    scanf("%d",&n1);
    printf("Entrer le deuxième entier:");
    scanf("%d",&n2);
    printf("la division de n1 par n2 donne: %f",f(n1,n2));


}

double f(int num1,int num2)
{
    return (float)num1/num2;
}
