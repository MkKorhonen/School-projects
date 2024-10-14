#include <stdio.h>
int main (void){
    char vastaus;
    double tleveys, tpituus, leveys, pituus, alue, nopeus, aika;
    do{
       printf ("Anna tontin leveys metrein‰ ");
       scanf ("%lf", &leveys);
       printf ("Anna tontin pituus metrein‰ ");
       scanf ("%lf", &pituus);
       printf ("Anna talon leveys metrein‰ ");
       scanf ("%lf", &tleveys);
       printf ("Anna talon pituus metrein‰ ");
       scanf ("%lf", &tpituus);

       alue = leveys * pituus - tleveys * tpituus;
       nopeus = 5 / 3.6;
       aika = alue / (nopeus * 0.7);

       printf ("leikkaamisessa kestaa %.2lf s\n", aika);
       getchar();
       printf ("lis‰‰ k/e?");
       scanf("%c", &vastaus);
    }while (vastaus=='k');
    return (0);

    }
