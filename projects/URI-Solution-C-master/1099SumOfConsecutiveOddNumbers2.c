#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int X, Y, temp, sum=0, i;
        scanf("%d %d", &X, &Y);
        
        if(X>Y)
        {
            temp = X;
            X = Y;
            Y = temp;
        }
        
        for(i=X+1; i<Y; i++)
        {
            if(i%2!=0) sum+=i;
        }
        printf("%d\n", sum);
    }
 
    return 0;
}