#include <stdio.h>
main (void) {

    double palkansaaja, veroprosentti, tuntimaara, verottaja, tuntipalkka, n, m;
    printf ("Anna tunti >");
    scanf ("%lf", &tuntimaara);
    printf ("Anna palkka");
    scanf ("%lf", &tuntipalkka);
    printf ("Anna vero");
    scanf ("%lf", &veroprosentti);

    n = tuntimaara * tuntipalkka;
    m = veroprosentti / 100;
    verottaja = m * n;
    palkansaaja = n - verottaja;

    printf ("verottajan osuus on %.2lf euroa\n", verottaja);
    printf ("Palkansaajan osuus on %.2lf euroa", palkansaaja);

    return (0);
}
