#include <stdio.h>
#define MAX_SIZE_TAB 500
#define MAX_MOYENNE 20
/**Programme qui prend des notes et affiche la somme et la moyenne*/
void main()
{
    /**D�claration des variables*/
    int i;
    int som;
    int nbm ;
    double moy ;
    int t[MAX_SIZE_TAB] ;
    int nbre;
    /**Saisie des donn�es*/
    /**---Saisir le nombre d'�tudiants **/
    do
    {
        printf("introduire le nombre d'�tudiant (1,%d):",MAX_SIZE_TAB);
        scanf("%d",&nbre);
    }
    while(nbre<=0 || nbre > MAX_SIZE_TAB);
    /**--- Saisie les moyennes des �tudiants**/
    for (i=0 ; i<nbre ; i++)
    {
        do
        {
            printf ("donnez la moyenne num�ro %d : ", i+1) ;
            scanf ("%d", &t[i]) ;
        }
        while(t[i]<0||t[i]>MAX_MOYENNE);
    }
    /** Traitement*/
    for(i=0, som=0 ; i<nbre ; i++)
    {
        som += t[i] ;
    }
    moy = (double)som / nbre ;

    printf ("\n\n moyenne de la classe : %f\n", moy) ;

    for (i=0, nbm=0 ; i<nbre ; i++ )
    {
        if (t[i] > moy)
            nbm++ ;
    }
    printf ("%d �l�ves ont plus de cette moyenne", nbm) ;
}
