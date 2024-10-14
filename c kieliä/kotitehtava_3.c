#include <stdio.h>

int main (void){

    double sala,nosto,r=3000;


    printf("anna salasana ");
    scanf("%lf", &sala);




    if (sala==1234){
        printf("tililla on %.2lf euroa\n",r);
        printf("paljonko nostetaan rahaa? ");
        scanf("%lf", &nosto);

        r=r-nosto;

        printf("saat %.2lf euroa\n", nosto);
        printf("tililla %.2lf euroa", r);

    }else printf("vaara salasana");


    return (0);
}
