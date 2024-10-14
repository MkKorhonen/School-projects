#include <stdio.h>
int main(void) {

    int r,x,y;
do{
    printf("paljonko nostetaan? >");
    scanf("%d", &r);

    if (r<20){
        printf("liian pieni summa\n");
    }
    if (r>1000){
        printf("liian suuri summa\n");
    }
}while (r<20 || r>1000);

     x=r/50;
     y=(r-50*x)/20;

     if (r-(50*x+y*20)==10){

         y=(r/50)-1;
         x=((r-y*50)/20);

         printf("saat %d * 20 euron setelia ja \n %d * 50 euron setelia",x,y);

     }else

     printf("saat %d * 20 euron setelia ja \n %d * 50 euron setelia",y,x);

     return (0);
     }




