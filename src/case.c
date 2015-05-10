#include "case.h"
#include <stdio.h>
void vider(cas k )
{
 k.occupant=NULL;
}

cas* insert_data(char m ,void* s)//argument l'indice de contenu m et le pointeur s et retourne un pointeur sur case
{
    cas * d = (cas*)malloc(sizeof(cas));
    d->occupant= s;
    d->mime=m;
    return d;
}



char afficher (cas k)
{ char tt;//char d'affichage
    if (k.mime=='v')
    {
      tt=' ';
    }
 else if ( k.mime=='m' )
    {
        tt ='*' ;
    }
else    if (k.mime=='p'){
    tt='.' ;
}

else if (k.mime=='s')
{
     tt='@';
}

else if (k.mime=='j')
{ tt='P';
}
else if (k.mime=='e')
{
    tt='X';
}
else if (k.mime=='#')
{
    tt='#';
}

    return (tt);
}
