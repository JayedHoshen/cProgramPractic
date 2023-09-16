#include <stdio.h>
 
int main() {
 
    while(1)
    {
        int x, i, j, sum=0;
        scanf("%d", &x);
        
        if(x==0) break;
        
        for(i=1, j=x; i<=5; i++)
        {
            if(j%2!=0) j+=1;
            sum+=j;
            j+=2;
        }
        printf("%d\n", sum);
    }
 
    return 0;
}