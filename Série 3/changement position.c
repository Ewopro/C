#include <stdio.h>
#define MAX_SIZE_TAB 100

void main()
{
    int T[MAX_SIZE_TAB];
    int i,j;
    int INDICESUP;
    int INDICEINF;
    int VALTEMP;
    int nbre;

    /**Saisie du nombre de case du tableau*/
    do
    {
        printf("introduire le nombre de valeur du tableau (1,%d):",MAX_SIZE_TAB);
        scanf("%d",&nbre);
    }
    while(nbre<=0 || nbre > MAX_SIZE_TAB);

    /**--- Saisie les valeurs*/
    for (i=0 ; i<nbre ; i++)
    {
        printf ("donnez la valeur numéro %d : ", i+1) ;
        scanf ("%d", &T[i]) ;
    }

    /**Affichage des tableaux*/
    printf("Tab[ ");
    for(i=0; i<nbre; i++)
    {
        printf("%d ",T[i]);
    }
    printf("]\n");

    /**inverser*/
    for(INDICESUP=nbre-1, INDICEINF=0; INDICESUP>=nbre/2; INDICESUP--,INDICEINF++)
    {
        VALTEMP = T[INDICEINF];
        T[INDICEINF]= T[INDICESUP];
        T[INDICESUP] = VALTEMP;
    }

    /**Affichage des tableaux*/
    printf("Tab[ ");
    for(i=0; i<nbre; i++)
    {
        printf("%d ",T[i]);
    }
    printf("]\n");

}

