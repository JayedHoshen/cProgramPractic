#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int X, Y; 
        double res;
        scanf("%d %d", &X, &Y);
        
        if(Y==0) printf("divisao impossivel\n");
        else
        {
            res = (double)X/Y;
            printf("%.1lf\n", res);
        }
    }
 
    return 0;
}