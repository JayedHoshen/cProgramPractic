#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int x, i, b=1;
        scanf("%d", &x);
        
        for(i=2; i<x; i++)
        {
            if(x%i == 0)
            {
                b=0;
                break;
            }
        }
        
        if(b) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
    }
 
    return 0;
}