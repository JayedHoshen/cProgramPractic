#include <stdio.h>
 
int main() {
 
    double x1, x2, y1, y2, dis, X, Y;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    X = (x2-x1)*(x2-x1);
    Y = (y2-y1)*(y2-y1);

    dis = sqrt(X+Y);

    printf("%.4lf\n", dis);

 
    return 0;
}