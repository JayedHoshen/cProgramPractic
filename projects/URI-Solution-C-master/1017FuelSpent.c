#include <stdio.h>
 
int main() {
 
         int hr, speed, dis, x = 12;
        double fuel;

        scanf("%d %d", &hr, &speed);
        dis = hr * speed;
        fuel = (double)dis/x;

        printf("%.3lf\n", fuel);

 
    return 0;
}