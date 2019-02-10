#include <stdio.h>
void main()

{


    int T[100];
    int N;
    int I,J;
    int aide;


    printf("Dimension du tableau (max.100) : ");
    scanf("%d", &N );
    for (I=0;I<N;I++)
    {
        printf("Element %d:", I);
        scanf("%d",&T[I]);
    }
    printf("Tableau :\n");
    for (I=0; I < N ; I++)
    {
        printf("%d", T[I]);
        printf("\n");
    }
    for (I=0,J=N-1; I<J; I++,J--)
    {
        aide=T[I];
        T[I]=T[J];
        T[J]= aide;
    }
    printf("Tableau resultat:\n");
    for (I=0; I < N ; I++)
    {
        printf("%d", T[I]);
    }
    printf("\n");
}


