#include <stdio.h>
void main()
{
    int som;
    int compt;
    int demande;
    compt = 1;
    som =0;
    do
    {
        printf("Nombre:");
        scanf("%d",&demande);
        som= som + demande; //som+=demande;
        compt +=1;
    }
    while(compt<=4);
    printf("Somme :%d\n",som);
}


