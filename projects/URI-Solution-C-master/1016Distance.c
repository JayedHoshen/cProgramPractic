#include <stdio.h>
 
int main() {
 
        int X = 60, Y = 90, time = 60, XYD, km, t;

        scanf("%d", &km);

        XYD = Y-X;
        t = km * (time/XYD);

        printf("%d minutos\n", t);


    
 
    return 0;
}