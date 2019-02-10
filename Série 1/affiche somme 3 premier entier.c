#include <stdio.h>
#include <conio.h>
/** programme qui calcule et affiche la
somme des 3 premiers entiers*/
void main()
{
    int i; //Le compteur
    int s; //La somme
    int NBS;
    int choix;
    /**-------------------------------
    Boucle do while pour la saisie
    controlée de NBS qui doit être > 0
    ----------------------------------*/
    do
    {
        printf("introduire le nbr concernés par la somme (à partir de 0):");
        scanf("%d",&NBS);
    }
    while(NBS<=0); /**tanque le NBS < 0 on redemande la saisie*/

    /**---------------------------------------------------------*/
    /**Boucle For pour le calcul des entier de 0 jusqu'à NBS*/
    /**---------------------------------------------------------*/
    for(/**Expression 1*/i=0, s= 0 ;
                         /**Expression 2*/ i<= NBS;
                         /**Expression 3*/ i = i+1 /**i++*/)
    {
        s = s+i; /** ou s+=i;*/
    }
    printf("(FOR) La somme = %d \n",s);

    /**---------------------------------------------------------*/
    /**Boucle While pour le calcul des entier de 0 jusqu'à NBS*/
    /**---------------------------------------------------------*/
    i=0;
    s= 0;
    while(i<=NBS)
    {
        s=s+i;
        i = i+1;
    }
    printf("(WHILE) La somme = %d \n",s);
    /**-----------------------------------------------
    Test si la somme est pair ou impair on
    utilise l'astuce du reste de la division entière
    -------------------------------------------------*/
    if((s%2)==1)
    {
        printf("Le nombre est impair\n");

    }
    else
    {
        printf("Le nombre est pair\n");
    }
    /**---- Test sur la somme ----*/
    if(s<20)
    {
        printf("Achat de porte feuille\n");
    }
    else if(s>=20 && s <100)
    {
        printf("Achat de parfum\n");
    }
    else if(s>=100 && s <500)
    {
        printf("Achat de Montre\n");
    }
    else if (s>=500 && s <1000)
    {
        printf("Achat d'ordinateur\n");
    }
    else
    {
        printf("Vous êtes très riche :D\n");
    }
    /**Entrer un caractère par le clavier*/
    printf("introduire un choix pour votre menu (1,2 ou 3):");
    scanf("%d",&choix);

    switch(choix)
    {
    case (1) :
        printf("** Entrez une valeur\n");
        break;
    case (2) :
        printf("** Entrez une lettre \n");
        break;
    case (3) :
        printf("** Quittez");
        break;
    default :
        printf("Le caractère n'est pas pris en considération");
        break;
    }
}
