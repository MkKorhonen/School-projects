#include <stdio.h>

int main( void ){
   FILE * tiedosto;
   char mjono[256];

   if((tiedosto = fopen("koe.txt", "r"))==NULL)
      printf("Virhe, ei voi kirjoittaa\n");
   else
      fprintf(tiedosto, "%s\n", "Kukkaruukku");

   if((tiedosto = fopen("koe.txt", "r"))==NULL)
      printf("Virhe, ei voi lukea\n");
   else
      fscanf(tiedosto, "%s", mjono);

   printf("\nLuettiin sana: %s\n", mjono);

   fclose( tiedosto );

   return 0;
}




