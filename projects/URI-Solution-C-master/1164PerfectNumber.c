#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    while(n--)
    {
        int x, sum=0, i;
        scanf("%d", &x);

        for(i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum+=i;
            }
        }

        if(x == sum)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }
    }
 
    return 0;
}