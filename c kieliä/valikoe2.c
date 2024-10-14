#include <stdio.h>
double taulukko(double t[]);
int main (void){
    int i;
    double luku;
    double t[10];

    for (i=0;i<10;i++){

    printf("Anna luku ");
    scanf("%lf", &t[i]);
    }

    luku = taulukko(t);



    return (0);
}
double taulukko(double t[]){
    int i;
    double small=t[0];

        for(i=1;i<10;i++){
      if(small>t[i])
           small=t[i];

    }
    printf("pienin luku on %.1lf", small);
          }
