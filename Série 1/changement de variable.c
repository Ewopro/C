#include <stdio.h>
void main()
{
    /** on cree des valeurs */
    int a;
    int b;
    int c;
    int d;

    /** on demande les valeurs de a, b, c a l'utilisateur */
    printf("NOMBRE A : ");
    scanf("%d", &a);
    printf("NOMBRE B : ");
    scanf("%d", &b);
    printf("NOMBRE C : ");
    scanf("%d", &c);

    /** on fait le chagement de valeurs */
    d=a;
    a=b;
    b=c;
    c=d;

    /** on affiche les valeurs de a ,b , c*/
    printf(" A = %d",a);
    printf(" B = %d ",b);
    printf(" C = %d",c);

}
