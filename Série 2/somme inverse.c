void main()
{
    double somme, save, i;
    int N ;
    do
    {
    printf("Entrez l'entier naturel N : ");
    scanf("%d", &N);
    }
    while(N<0);
    for (i=1; i<N; i++)
    {
        save = somme;
        somme += 1/i;
        printf("%f + 1/%0.0f = %f\n", save, i, somme);
    }
}
