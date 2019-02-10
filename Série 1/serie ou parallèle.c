#include <stdio.h>
void main()
{
    /** on cree des valeurs */
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    /** on demande les valeurs de a, b a l'utilisateur */
    printf("R1 : ");
    scanf("%d", &a);
    printf("R2 : ");
    scanf("%d", &b);
    printf("R3 : ");
    scanf("%d", &c);
    printf("Sont il brancher en serie ?:(1) ou (2)");
    scanf("%d", &d);

    /** on fait la boucle */
    if (d == 1){
        e = a + b + c;
        printf("serie = %d\n",e);
    }
    else{
        f = a*b*c/a*b+a*c+b*c ;
        printf("parralelle = %d\n",f);
    }



}
