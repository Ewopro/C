#include <stdio.h>
void main()
{
    //Variable
    double ttc;
    double TVA;
    double calcul;

    //Saisie
    printf("Prix TTC : ");
    scanf("%lf", &ttc);

    printf("TVA : ");
    scanf("%lf", &TVA);

    //calcul & Affichage

    calcul = ttc / (1 + (TVA / 100));
    printf("Prix HTC :%.2lf\n",calcul);
}
