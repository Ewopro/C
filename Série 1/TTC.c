#include <stdio.h>
void main()
{
    double NET;
    double TVA;
    double calcul;

    printf("Prix Net : ");
    scanf("%lf", &NET);
    printf("TVA : ");
    scanf("%lf", &TVA);
    calcul = NET + (NET*TVA/100);
    printf("Prix TTC :%.2lf\n",calcul);
}

