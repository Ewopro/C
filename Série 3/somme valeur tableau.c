#include <stdio.h>
void main()
{

    int T[50];
    int N;
    int I;
    double SOM;

    printf("Dimension du tableau (50 MAX) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++)
    {
        printf("El�ment %d : ", I);
        scanf("%d", &T[I]);
    }
    printf("Tableau donn� :\n");
    for (I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");

    for (SOM=0, I=0; I<N; I++)
        SOM += T[I];

    printf("Somme de �l�ments : %fn\n", SOM);
}
