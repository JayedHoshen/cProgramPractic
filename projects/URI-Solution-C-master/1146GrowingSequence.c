#include <stdio.h>
 
int main() {
 
    while(1)
    {
        int x, i, t=1;

        scanf("%d", &x);
        if(x==0) break;

        for(i=1; i<=x; i++)
        {
            if(!t)
            {
                printf(" %d", i);
            }
            else
            {
                printf("%d", i);
                t = 0;
            }
        }
        printf("\n");

    }
 
    return 0;
}