#include <stdio.h>
void main()
{
    /** on cree des valeurs */
    int a;
    int b;
    int c;
    int p;
    int aire;
    int p1;

    /** on demande les valeurs de a, b a l'utilisateur */
    printf("Cote 1 : ");
    scanf("%d", &a);
    printf("Cote 2 : ");
    scanf("%d", &b);
    printf("Cote 3 : ");
    scanf("%d", &c);

    p = a + b + c ;
    aire = p*(p-a)*(p-b)*(p-c);
    p1 = a + b + c /2;
    printf("Aire :%d\n",aire);
    printf("Demi-perimetre :%d\n",p1);
}

