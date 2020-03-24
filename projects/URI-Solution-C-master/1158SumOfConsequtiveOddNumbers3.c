#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int x, y, i, j, sum=0;
        scanf("%d %d", &x, &y);
        
        for(i=1, j=x; i<=y; i++)
        {
            if(j%2==0) j+=1;
            sum += j;
            j+=2;
        }
        printf("%d\n", sum);
    }
 
    return 0;
}