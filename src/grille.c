#include "grille.h"
#include <stdio.h>
#include "joueur.h"
#include <stdlib.h>
void charger (grile* g,int a,int b)
{
int i,j;
g->largeur=b;
g->longueur=a;
g->t=(cas **)malloc(a * sizeof(cas* ));
for(i=0;i<a;i++)
g->t[i]=(cas *)malloc(b * sizeof(cas ));
for (i=0; i<a; i++)
{
    for (j=0; j<b; j++)
    {
        g->t[i][j]=*insert_data('v',NULL);
    }
}
}
void aff(grile g,int s,int h)
{
int i,j, largeur, longueur;
char x;
largeur = g.largeur;
longueur= g.longueur;
//printf("\r");
for (i=0; i<longueur; i++)
{
    for (j=0; j<largeur; j++)
    {
       x = afficher(g.t[i][j]);
        printf("%c", x);
    }
    printf ("\n");

}
printf("************************************\n*votre score:%03d                   *\n*nombre de vie:%d                   *\n*                                  *\n************************************",s,h);
}




void remplir (grile g)
{ char h,w;
int i, j, largeur, longueur; mur mo;
largeur = g.largeur; h='m';w='p';
longueur= g.longueur;
for (i=0; i<longueur; i++)
{g.t[i][0]=*insert_data(h, &mo);
}
for (i=0; i<longueur; i++)
{   g.t[i][largeur-1]=*insert_data(h,&mo);
}
for (j=0; j<largeur; j++)
{   g.t[0][j]=*insert_data(h,&mo);
}

for (j=0; j<largeur; j++)
{   g.t[longueur-1][j]=*insert_data(h,&mo);
}
for (i=2; i<longueur-1; i++)
    {
for (j=2; j<largeur-1; j++)
    if((i==longueur-7)&&(j==largeur-7))
       g.t[i][j]=*insert_data('j',NULL);
      // else if(((i==15)&&(j==34))||((i==15)&&(j==35))||((i==15)&&(j==33))||((i==16)&&(j==32))||((i==16)&&(j==33))||((i==16)&&(j==34))||((i==16)&&(j==35))||((i==17)&&(j==33))||((i==17)&&(j==34))||((i==17)&&(j==35)))
        //g.t[i][j]=*insert_data('v',&mo);
else
       g.t[i][j]=*insert_data(w,&mo);

    }

/*for (i=14; i<18; i++)
        {
for (j=32; j<37; j++)*/

        /*g.t[14][32]=*insert_data('v',&mo);
        g.t[15][32]=*insert_data('v',&mo);
        //g.t[16][32]=*insert_data('#',&mo);
        g.t[17][32]=*insert_data('v',&mo);
        g.t[18][32]=*insert_data('v',&mo);
        g.t[14][33]=*insert_data('v',&mo);
        g.t[14][34]=*insert_data('v',&mo);
        g.t[14][35]=*insert_data('v',&mo);
        g.t[14][36]=*insert_data('v',&mo);
        g.t[18][32]=*insert_data('v',&mo);
        g.t[18][33]=*insert_data('v',&mo);
        g.t[18][34]=*insert_data('v',&mo);
        g.t[18][35]=*insert_data('v',&mo);
        g.t[18][36]=*insert_data('v',&mo);
        g.t[14][36]=*insert_data('v',&mo);
        g.t[15][36]=*insert_data('v',&mo);
        g.t[16][36]=*insert_data('v',&mo);
        g.t[17][36]=*insert_data('v',&mo);
        g.t[18][36]=*insert_data('v',&mo);*/

}
void liberer (grile* g){
free (g);
}




