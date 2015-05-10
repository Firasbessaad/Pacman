#include "joueur.h"
#include <stdio.h>
void resetp (trace *e, grile* g,int v,int s ) {
e->x= (g->longueur)-7;
e->y= (g->largeur)-7;
g->t[e->x][e->y]=*insert_data('j' ,&e);
e->nb_vie=v;
e->score=s;
e->pouvoir=0;

}
int deplacerp (trace* e,direction d,grile g)
{
    int i,j, r,xl, yl, k;
    if ( d == haut)
    {
        j = (e->y);j--;
        i=e->x;
    }
    else if (d==bas)
    {
       i= (e->x); i++;
        j=e->y;
    }
    else if (d==droite)
    {
        i= (e->x);
        j=e->y; j++;
    }
    else
    {
        i= (e->x);
        j=e->y; j--;
    }
    xl = g.longueur; yl = g.largeur;
    //if ((i==xl) || (j==yl)|| i==0 || j==0)
        //{r= 3;}

    if (g.t[i][j].mime =='m')
    {   r= 3;}
    else if ((i < xl) && (j < yl) && (i>0) && (j>0))
    {
        r= 1;
         if (g.t[i][j].mime =='p')
         {
            k=(e->score);
              k++;
              e->score=k;
         }
    }
return (r);
}
void Moove (trace* e, direction d, grile * g){
    int k,i,j,xl,yl; pac pc;
     xl = g->longueur; yl = g->largeur;
if( deplacerp(e,d,*g)==1){
        if ( d == haut)
    {
        j = (e->y);
        i=e->x; i--;
    }
    else if (d == bas)
    {
        j = (e->y);
        i= e->x; i++;
    }
    else if (d==droite)
    {
        i= (e->x);
        j=e->y;j++;
    }
    else
    {
        i= (e->x);
        j=e->y; j--;
    }
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
              //k=(e->score);
              //k++;
              //e->score=k; //ajouté 19:40

        g->t[e->x][e->y]=*insert_data('j' ,&pc);
}
else if (deplacerp(e,d,*g)==3)
{
 if ( d == haut)
    {
        j = (e->y);
        i= xl-2;
         g->t[e->x][e->y]=*insert_data('m' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&pc);
    }
    else if (d == bas)
    {
        j = (e->y);
        i= e->x; i=1;
         g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&pc);
    }
    else if (d==droite)
    {
        i= (e->x);
        j=e->y;j=1;
         g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&pc);
    }
    else
    {
        i= (e->x);
        j= yl-1;
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&pc);
    }

}
}
