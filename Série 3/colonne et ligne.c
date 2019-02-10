#include <stdio.h>
#define MAX_SIZE_TAB 50
#define MAX_SIZE_TAB1 50


void main()
{
    int T[MAX_SIZE_TAB][MAX_SIZE_TAB1];
    int som;
    int nbre;
    int nbre1;
    int i,j;

    /**Saisie du nombre de case du tableau*/
    do
    {
        /**Saisie du nombre de case du tableau 1*/
        printf("introduire le nombre de valeur du tableau (1,%d):",MAX_SIZE_TAB);
        scanf("%d",&nbre);
        /**Saisie du nombre de case du tableau 2*/
        printf("introduire le nombre de valeur du tableau1 (1,%d):",MAX_SIZE_TAB1);
        scanf("%d",&nbre1);
    }
    while(nbre1<=0 || nbre<=0 || nbre > MAX_SIZE_TAB || nbre1 > MAX_SIZE_TAB1 );

    /**--- Saisie les valeurs*/
    for (i=0 ; i<nbre ; i++)
    {
        for (j=0 ; j<nbre1 ; j++)
        {
            printf ("donnez la valeur numéro: ") ;
            scanf ("%d", &T[i][j]) ;
        }

    }
     for (i=0 ; i<nbre ; i++)
    {
        for (j=0 ; j<nbre1 ; j++)
        {
            printf ("%d",T[i][j]) ;

        }

        printf("\n");
    }
}
