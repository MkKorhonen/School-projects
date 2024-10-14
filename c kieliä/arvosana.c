#include <stdio.h>
int main (void) {
    double arvosana, pisteet;
    printf ("Anna pisteet");
    scanf ("%lf", &pisteet);

    if ( pisteet>=0 && pisteet<=11)
        printf ("Hylätty");
    else if (pisteet>=12 && pisteet<=13)
        printf ("arvosana on 1");
    else if (pisteet>=14 && pisteet<=16)
        printf ("arvosana on 2");
    else if (pisteet>=17 && pisteet<=19)
        printf ("arvosana on 3");
    else if (pisteet>=20 && pisteet<=22)
        printf ("arvosana on 4");
    else if (pisteet>=23 && pisteet<=24)
        printf ("arvosana on 5");

    return (0);
     }
