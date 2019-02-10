#include <stdio.h>
void main()
{


    int T[100], TPOS[100], TNEG[100];
    int N, NPOS, NNEG;
    int I;

    printf("Dimension du tableau (max.100) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++)
    {
        printf("Elément %d : ", I);
        scanf("%d", &T[I]);

    }
    printf("Tableau donné : \n");
    for (I=0; I<N; I++)
    {

        printf("%d ", T[I]);
    }
    printf("\n");
    NPOS=0;
    NNEG=0;
    for (I=0; I<N; I++)
    {
        if(T[I]>0)
        {
            TPOS[NPOS]= T[I];
            NPOS++;
        }
        if(T[I]<0)
        {
            TNEG[NNEG]= T[I];
            NNEG++;
        }
    }
    printf("Tableau résultat :\n");
    for (I=0; I<NPOS; I++)
    {
        printf("%d ", TPOS[I]);
    }
    printf("\n");
    printf("Tableau résultat :\n");
    for (I=0; I<NNEG; I++)
    {
        printf("%d ", TNEG[I]);
    }
    printf("\n");
}



