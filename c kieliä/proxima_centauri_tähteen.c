#include <stdio.h>
main (void) {
    double aika, a, b, c;
    a = 343;
    b = 4.2 * 9.46 * 10E15;
    c = b / a;
    aika = c * 60 * 60;
    printf ("matka kestaa %.1lf tuntia", aika);
    return (0);
}
