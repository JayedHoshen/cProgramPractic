#include <stdio.h>
 
int main() {
 
    double n;
    scanf("%lf", &n);
    
    if(n>=0 && n<=100)
    {
        if(n<=25.00)
            printf("Intervalo [0,25]\n");
        else if(n<=50.00)
            printf("Intervalo (25,50]\n");
        else if(n<=75.00)
            printf("Intervlo (50,75]\n");
        else
            printf("Intervalo (75,100]\n");
    }
    else
        printf("Fora de intervalo\n");
 
    return 0;
}