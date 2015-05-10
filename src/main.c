#include <stdio.h>
#include "case.h"
#include "grille.h"
#include "joueur.h"
#include "ennemi.h"
#include "menu.h"
#include <time.h>
//#include <conio.h>
#include<stdlib.h>

char a;
int rep;
int la,lo;
int v,s;
pac p;


 int main()
   {

       la=18;
       lo=36;
       direction d,d1,d2,d3;
       tracen tte;//ajouter te
      tracen *te1,tte1;
       tracen *te2,tte2;
       tracen *te3,tte3;

if (menu()=='1')
{srand(time(NULL));
        trace t, * tt; ; char h;
        grile * gr, g;
        gr=&g; tt=&t;/*te=&tte;*/ te1=&tte1; te2=&tte2; te3=&tte3;
        charger (gr,18,36);
        resetp(tt,gr,3,0);
        s=tt->score;
        v=tt->nb_vie;
        remplir(g);
        aff(g,s,v);


  //      system("cls");
resete(&tte,gr); //remplacer tte par te
resete1(te1,gr);
//resete2(te2,gr);
//resete3(te3,gr);
 puts("1");
         system("cls");
              aff(g,s,v);
        srand(time(NULL));


while(tt->nb_vie){
        if(((tt->y)==(&tte.ye))&&((tt->x)==(&tte.xe))) //ajouter 17:51

{
     if(tt->pouvoir==0)
     {
         tt->nb_vie--;
         s=tt->score;
         g.t[tt->x][tt->y]=*insert_data('e' ,&tte);
         resetp(&tt,gr,tt->nb_vie,s);}

}

//d = rand()% 4;
d1 = rand()% 4;
d2 = rand()% 4;
d3 = rand()% 4;
if(deplaceren(tte,suit_fuit(&tte,tt,0,gr),g)==1)
{

    Move (&tte,suit_fuit(&tte,tt,0,gr), gr);
if(((tt->y)==(&tte.ye))&&((tt->x)==(&tte.xe)))

{
     if(tt->pouvoir==0)
     {
         tt->nb_vie--;
         s=tt->score;
         g.t[tt->x][tt->y]=*insert_data('e' ,&tte);
         resetp(&tt,gr,tt->nb_vie,s);}

} }
if(deplaceren(tte1,suit_fuit(te1,tt,0,gr),g)==1)
{

    Move (te1,suit_fuit(te1,tt,0,gr), gr);

if(((tt->y)==(&tte.ye))&&((tt->x)==(&tte.xe))) //ajouter 17:51

{
     if(tt->pouvoir==0)
     {
         tt->nb_vie--;
         s=tt->score;
         g.t[tt->x][tt->y]=*insert_data('e' ,&tte);
         resetp(&tt,gr,tt->nb_vie,s);}

}
}
if(deplaceren(tte2,suit_fuit(te2,tt,0,gr),g)==1)
{

    Move (te2,suit_fuit(te2,tt,0,gr), gr);

if(((tt->y)==(&tte.ye))&&((tt->x)==(&tte.xe)))  //ajouter 17:51

{
     if(tt->pouvoir==0)
     {
         tt->nb_vie--;
         s=tt->score;
         g.t[tt->x][tt->y]=*insert_data('e' ,&tte);
         resetp(&tt,gr,tt->nb_vie,s);}

}
}
if(deplaceren(tte3,suit_fuit(te3,tt,0,gr),g)==1)
{

    Move (te3,suit_fuit(te3,tt,0,gr), gr);

if(((tt->y)==(&tte.ye))&&((tt->x)==(&tte.xe))) //ajouter 17:51

{
     if(tt->pouvoir==0)
     {
         tt->nb_vie--;
         s=tt->score;
         g.t[tt->x][tt->y]=*insert_data('e' ,&tte);
         resetp(&tt,gr,tt->nb_vie,s);}

}
}

//my_delay(1);


   h= getch();

if(h == 'q'){
Moove(tt,gauche,gr);
/*tt->score++;*/
}
if (h=='d'){
Moove(tt,droite,gr);
}
if (h=='z'){
Moove(tt, haut,gr);
}
if (h =='s'){
Moove(tt, bas, gr);}


system("cls");
aff(g,tt->score,tt->nb_vie); }
if (v==3){
        /*system("cls");
        v=tt->nb_vie;
        printf("%d",&v);
        system("cls");
        printf( "bla bla bla merci pour votre attention \n \n \n \n ");}
    */return (0);
  }


   else if(menu()=='2')
    {
        printf("voulez vous changer la taille? (1/0) \n ");
        scanf("%d",&rep);
        printf("saisie la largeure: \n");
        scanf("%d",&la);
        printf("saisir la longueure: \n");
        scanf("%d",&lo);

        }




}   }
