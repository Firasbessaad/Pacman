#include "ennemi.h"
#include <stdio.h>
#include <time.h>

int deplaceren (tracen e, direction d, grile g){

 int i,j, r,xl, yl, k;
    if ( d == haut)
    {
        j = (e.ye);j--;
        i=e.xe;
    }
    else if (d==bas)
    {
       i= (e.xe); i++;
        j=e.ye;
    }
    else if (d==droite)
    {
        i= (e.xe);
        j=e.ye; j++;
    }
    else
    {
        i= (e.xe);
        j=e.ye; j--;
    }
    xl = g.longueur; yl = g.largeur;
    if ((i==xl) || (j==yl)|| i==0 || j==0)
        {r= 3;}

   // (g.t[i][j].mime =='m')
    //{   r= 3;}
    else if ((i < xl) && (j < yl) && (i>1) && (j>1))
    {
        r= 1;
    }
return (r);
}
void resete(tracen* e, grile* g){
//enemi ee1;
e->xe= (g->longueur)/2 - 2;
e->ye= (g->largeur)/2 ;
 g->t[e->xe][e->ye]=*insert_data('e',&e) ;
 /*g->t[e->xe][e->ye]=*insert_data('e',&ee2) */

}
void resete1(tracen* e, grile* g){
//enemi ee2;
e->xe= (g->longueur)/2 ;
e->ye= (g->largeur)/2 ;
 g->t[e->xe][e->ye]=*insert_data('e',&e) ;
 /*g->t[e->xe][e->ye]=*insert_data('e',&ee2) */

}
void resete2(tracen* e, grile* g){
//enemi ee3;
e->xe= (g->longueur)/2 ;;
e->ye= (g->largeur)/2 -3;
g->t[e->xe][e->ye]=*insert_data('e',&e) ;
 /*g->t[e->xe][e->ye]=*insert_data('e',&ee2)*/

}
void resete3(tracen* e, grile* g){
//enemi ee4;
e->xe= (g->longueur)/2 ;
e->ye= (g->largeur)/2 - 2 ;
 g->t[e->xe][e->ye]=*insert_data('e',&e) ;
 /*g->t[e->xe][e->ye]=*insert_data('e',&ee2) */

}


void Move (tracen* e, direction d, grile* g){ int i,j; /*enemi ee;*/ cas var;

if( deplaceren(*e,d,*g)==1){
        if ( d == haut)
    {
        j = (e->ye);
        i=e->xe; i--;
    }
    else if (d == bas)
    {
        j = (e->ye);
        i= e->xe; i++;
    }
    else if (d==droite)
    {
        i= (e->xe);
        j=e->ye;j++;
    }
    else
    {
        i= (e->xe);
        j=e->ye; j--;
    }
        if (g->t[i][j].mime =='p')
        g->t[e->xe][e->ye]=*insert_data('p',NULL);
        else {
        g->t[e->xe][e->ye]=*insert_data('v',NULL);

             }
              e->xe=i;
              e->ye=j;

       g->t[e->xe][e->ye]=*insert_data('e',&e);
}
else if(deplaceren(*e,d,*g)==3)
{


    if (d == haut )
{
    i=e->xe;
    j=e->ye;
    if (i==1){i=15;}
    g->t[e->xe][e->ye]=*insert_data('v' ,NULL);
              e->xe=i;
              e->ye=j;
        g->t[e->xe][e->ye]=*insert_data('e' ,&e);

}
    if (d == bas )
{
    i=e->xe;
    j=e->ye;
    if (i==17){i=1;}
    g->t[e->xe][e->ye]=*insert_data('m' ,NULL);
              e->xe=i;
              e->ye=j;
        g->t[e->xe][e->ye]=*insert_data('e' ,&e);

}
    if (d == droite )
{
    i=e->xe;
    j=e->ye;
    if (j==35){j=2;}
    g->t[e->xe][e->ye]=*insert_data('m' ,NULL);
              e->xe=i;
              e->ye=j;
        g->t[e->xe][e->ye]=*insert_data('e' ,&e);

}
    if (d == gauche )
{
    i=e->xe;
    j=e->ye;
    if (j==2){j=30;}
    g->t[e->xe][e->ye]=*insert_data('v' ,NULL);
              e->xe=i;
              e->ye=j;
        g->t[e->xe][e->ye]=*insert_data('e' ,&e);

}
}

}


direction suit_fuit(tracen* e,trace* p,int s/*,pac* pc*/,grile* g)
{
//s=1 si super pastille activé s=0 sinon
int n,xp,yp,xf,yf,d1,v;
direction D;
//enemi ee; //D contien le mouvement a effectuer : d=1,2,3,4 haut,droite,bas,gauche

xp=(p->y);
yp=(p->x);
xf=(e->ye);
yf=(e->xe);
if((xp==xf)&&(yp==yf))
{
     if(s==0)
     {
         p->nb_vie--;
         v=p->nb_vie;
         n=p->score;
         g->t[p->x][p->y]=*insert_data('e' ,&e);
         resetp(p,g,v,n);

     }
}
else if(xp==xf)
{
    if(yp<yf)
    {
      if(s==0) //pas de super pouvoir
        D=haut;//bas pour attaquer pacman
      else //super pouvoir
        D=bas; //haut fuit de pacman
    }
    else
    {
      if(s==0) //pas de super pouvoir
        D=bas;//haut pour attaquer pacman
      else //super pouvoir
        D=haut; //bas fuit de pacman
    }

}
else if(yp==yf)
{
    if(xp>xf)
    {
      if(s==0) //pas de super pouvoir
        D=droite;//droite pour attaquer pacman
      else //super pouvoir
        D=gauche; //gauche fuit de pacman
    }
    else /*if*///(xf>xp)
    {
      if(s==0) //pas de super pouvoir
        D=gauche;//gauche pour attaquer pacman
      else //super pouvoir
        D=droite; //droite fuit de pacman
    }
    //else D=haut; //pacmann et fantome en meme position
}
else //recherche
{
    d1 = (rand()% 4) +1;
    if (d1==1){D=haut;}
    else if (d1==2){D=bas;}
          else if (d1==3){D=droite;}
          else D=gauche;
}
return D;
}
