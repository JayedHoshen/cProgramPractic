#include <stdio.h>
 
int main() {
 
    int X, Y;
    double result;
    scanf("%d %d", &X, &Y);
    
    printf("Total: R$ ");
    
    if(X == 1) 
    {
        result = 4.00 * Y;
        printf("%.2lf\n", result);
    }
    else if(X == 2) 
    {
        result = 4.50 * Y;
        printf("%.2lf\n", result);
    }
    else if(X == 3) 
    {
        result = 5.00 * Y;
        printf("%.2lf\n", result);
    }    
    else if(X == 4) 
    {
        result = 2.00 * Y;
        printf("%.2lf\n", result);
    }
    else if(X == 5) 
    {
        result = 1.50 * Y;
        printf("%.2lf\n", result);
    }
    
    
    
 
    return 0;
}