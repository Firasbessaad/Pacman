/*#include "joueur_pacman.h"
#include <stdio.h>
void resetp (trace *e, grile* g) {
e->x= (g->longueur)-7;
e->y= (g->largeur)-7;
g->t[e->x][e->y]=*insert_data('j' ,&e);

}
int deplacerp (trace e,direction d,grile g)
{
    int i,j, r,xl, yl;
    xl = g.longueur; yl = g.largeur;
    if ( d == haut)
    {
        j = (e.y);i--;
        i=e.x;
        if ((i < xl) && (j < yl) && (i>1) && (j>1))
    {
        if (g.t[i][j].mime =='e'){r= 2;}
        else if (g.t[i][j].mime =='v') {r= 3;}
        else if (g.t[i][j].mime =='p') {r= 1;}
        else if (g.t[i][j].mime =='s') {r= 4;}


    } else if ((i==xl) || (j==yl)|| i==0 || j==0)
        {r= 5;} }
    else if (d==bas)
    {
       i= (e.x); i++;
        j=e.y;
        if ((i < xl) && (j < yl) && (i>1) && (j>1))
    {
        if (g.t[i][j].mime =='e'){r= 2;}
        else if (g.t[i][j].mime =='v') {r= 3;}
        else if (g.t[i][j].mime =='p') {r= 1;}
        else if (g.t[i][j].mime =='s') {r= 4;}


    } else if ((i==xl) || (j==yl)|| i==0 || j==0)
        {r= 5;}
    }
    else if (d==droite)
    {
        i= (e.x);
        j=e.y; j++;
        if ((i < xl) && (j < yl) && (i>1) && (j>1))
    {
        if (g.t[i][j].mime =='e'){r= 2;}
        else if (g.t[i][j].mime =='v') {r= 3;}
        else if (g.t[i][j].mime =='p') {r= 1;}
        else if (g.t[i][j].mime =='s') {r= 4;}


    } else if ((i==xl) || (j==yl)|| i==0 || j==0)
        {r= 5;}
    }
    else
    {
        i= (e.x);
        j=e.y; j--;
        if ((i < xl) && (j < yl) && (i>1) && (j>1))
    {
        if (g.t[i][j].mime =='e'){r= 2;}
        else if (g.t[i][j].mime =='v') {r= 3;}
        else if (g.t[i][j].mime =='p') {r= 1;}
        else if (g.t[i][j].mime =='s') {r= 4;}


    } else if ((i==xl) || (j==yl)|| i==0 || j==0)
        {r= 5;}
    }
return (r);}
void Moove (trace* e, direction d, grile * g){
    int i,j; //pac pc;
   // ennemi ee;
if( (deplacerp(*e,d,*g))==1(deplacerp(*e,d,*g)==3)){
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
        g->t[e->x][e->y]=*insert_data('j' ,&e);
         e->score++;
}
else if(deplacerp(*e,d,*g)==5)
{


    if (d == haut )
{
    i=e->x;
    j=e->y;
    if (i==1){i=33;}
    g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&e);

}
    if (d == bas )
{
    i=e->x;
    j=e->y;
    if (i==34){i=1;}
    g->t[e->x][e->y]=*insert_data('m' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&e);

}
    if (d == droite )
{
    i=e->x;
    j=e->y;
    if (j==69){j=2;}
    g->t[e->x][e->y]=*insert_data('m' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&e);

}
    if (d == gauche )
{
    i=e->x;
    j=e->y;
    if (j==2){j=69;}
    g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
        g->t[e->x][e->y]=*insert_data('j' ,&e);

}
}
if( deplacerp(*e,d,*g)==4){
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
        g->t[e->x][e->y]=*insert_data('j' ,&e);
        e->score++;

}
else if(deplacerp(*e,d,*g)==2)
{
    if ( d == haut)
    {
        j = (e->y);
        i=e->x; i--;
        if (pc->pouvoire==1)
    {
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
              var=&e
        g->t[e->x][e->y]=*insert_data('j' ,&e);

        resete(var,g);


    }
    else
        resetp(e,g);


    }
    else if (d == bas)
    {
        j = (e->y);
        i= e->x; i++;
          if (pc->pouvoire==1)
    {
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
              var=&e
        g->t[e->x][e->y]=*insert_data('j' ,&e);

        resete(var,g);


    }
    else
        resetp(e,g);
    }
    else if (d==droite)
    {
        i= (e->x);
        j=e->y;j++;
          if (pc->pouvoire==1)
    {
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
              var=&e
        g->t[e->x][e->y]=*insert_data('j' ,&e);

        resete(var,g);


    }
    else
        resetp(e,g);
    }
    else
    {
        i= (e->x);
        j=e->y; j--;
          if (pc->pouvoire==1)
    {
        g->t[e->x][e->y]=*insert_data('v' ,NULL);
              e->x=i;
              e->y=j;
              var=&e
        g->t[e->x][e->y]=*insert_data('j' ,&e);

        resete(var,g);


    }
    else
        resetp(e,g);
    }

}

}
