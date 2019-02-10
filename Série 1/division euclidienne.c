#include <stdio.h>
void main()
{
    /** on cree des valeurs */
    int a;
    int b;
    int c;
    float q;
    int e;

    /** on demande les valeurs de a, b a l'utilisateur */
    printf("NOMBRE A nombre divise : ");
    scanf("%d", &a);
    printf("NOMBRE B diviseur : ");
    scanf("%d", &b);

    /** on fait les calculs */
    c = a/b;
    q = (float)a/b;
    e =  (a)%(b);
    /** on affiche les valeurs de a ,b , c*/
    printf("quotiien = %d\n",c);
    printf("quotien rationel = %f\n",q);
    printf("reste= %d\n",e);
}

