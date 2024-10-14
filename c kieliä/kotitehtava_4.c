#include <stdio.h>
#include <string.h>

typedef struct{
int saldo;
}pankki_T;

void valikko(void);
double saldo (double);
double lisaa (double);
double nosta (double);
void lueRoskat();
void lueMerkkijono (char mjono[], int koko);

int main (void){

    double sala,n,l;
    double r=3000;
    int Loppu=0;
    int valinta;
    int maara=-1;


do{
    printf("anna salasana ");
    scanf("%lf", &sala);
}while (sala!=1234);



    if (sala==1234){


    do{
        valikko();
        valinta=lueKokonaisluku();
        switch(valinta){

        case 1:
                saldo(r);
                break;

        case 2:
                nosta(r);
                break;


        case 3:
                 lisaa(r);
                 break;

        case 0: Loppu=1;
         break;


        default: printf("tuntematon komento\n");
        break;
        }
    }while (!Loppu);


    return (0);
    }}

void valikko(void){

    printf("1 saldo\n ");
    printf("2 nosta\n ");
    printf("3 lisaa\n ");
    printf("0 lopetus\n ");
    printf(">");
    }

int lueKokonaisluku(void){

   int luku;
   char mki;
   int status;

   while((status = scanf("%d%c", &luku, &mki))==0  || (2 == status && mki != '\n') ){
      lueRoskat();
      printf("Et syottanyt kokonaislukua > ");
   }

   return luku;
}

int lueReaaliluku(void){

   double luku;
   char mki;
   int status;

   while((status = scanf("%lf%c", &luku, &mki))==0  || (2 == status && mki != '\n') ){
      lueRoskat();
      printf("Et syottanyt reaalilukua > ");
   }

   return luku;
}



void lueRoskat(void){

   while( fgetc(stdin) != '\n');

}



void lueMerkkijono( char merkkijono[], int pituus ){

   fgets( merkkijono, pituus, stdin );

   if( merkkijono[ strlen(merkkijono) -1 ] == '\n')
      merkkijono[ strlen(merkkijono) -1 ] = '\0';
   else
      lueRoskat();

}

double saldo (double r){

    printf("Saldo on %.1lf euroa\n",r);
    }

double nosta(double r){

    double n;

    printf("paljonko nostetaan? >");
    scanf("%lf", &n);

    r=r-n;

    printf("Saat %.1lf euroa\n",n);

    return r;
    }

double lisaa (double r){

    double l;

    printf("Anna summa >");
    scanf("%lf",&l);

    r=r+l;

    printf("Lisasit %.1lf euroa tilille\n",l);

    return r;
}
