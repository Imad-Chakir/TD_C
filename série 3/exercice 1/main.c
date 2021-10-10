
int main()
{
    int A;
    printf("Entrer l'annee:");
    scanf("%d",&A);
    if ((A%4==0 && A%100!=0) || (A%400==0))
        printf("l'annee est bissextile.");
        else
            printf("l'annee n'est pas bissextile.");

}
