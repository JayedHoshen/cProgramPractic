#include <stdio.h>
 
int main() {
 
        int n,totaltaka,hundrednote,fiftynote,twentynote,tennote,fivenote,twonote,onenote;
        scanf("%d",&n);
        totaltaka=n;
        hundrednote=(totaltaka-(totaltaka%100))/100;
        totaltaka=(totaltaka%100);
        fiftynote=(totaltaka-(totaltaka%50))/50;
        totaltaka=(totaltaka%50);
        twentynote=(totaltaka-(totaltaka%20))/20;
        totaltaka=(totaltaka%20);
        tennote=(totaltaka-(totaltaka%10))/10;
        totaltaka=(totaltaka%10);
        fivenote=(totaltaka-(totaltaka%5))/5;
        totaltaka=(totaltaka%5);
        twonote=(totaltaka-(totaltaka%2))/2;
        totaltaka=(totaltaka%2);
        onenote=totaltaka;
        printf("%d\n",n);
        printf("%d nota(s) de R$ 100,00\n",hundrednote);
        printf("%d nota(s) de R$ 50,00\n",fiftynote);
        printf("%d nota(s) de R$ 20,00\n",twentynote);
        printf("%d nota(s) de R$ 10,00\n",tennote);
        printf("%d nota(s) de R$ 5,00\n",fivenote);
        printf("%d nota(s) de R$ 2,00\n",twonote);
        printf("%d nota(s) de R$ 1,00\n",onenote);
 
    return 0;
}