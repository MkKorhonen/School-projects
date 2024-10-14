#include <stdio.h>

int main (void) {
   double asteina, kelvineina, fahrenheit;

   printf ("Anna lampotila >");
   scanf ("%lf", &asteina);

   kelvineina = asteina + 273.15;
   fahrenheit = asteina * 1.8 + 32;

   printf ("lampotila on %.1lf K \n", kelvineina);
   printf ("lampotila on %.1lf F \n", fahrenheit);

   return (0);
   }
