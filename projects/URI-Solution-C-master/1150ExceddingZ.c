#include <stdio.h>
 
int main() {
 
    int x, z, count=0, sum=0, i;

    scanf("%d", &x);
    scanf("%d", &z);

    while(z<=x)
    {
        scanf("%d", &z);
    }

    i=x;

    while(1)
    {
        if(sum>z) break;

        sum+=i;
        i++;
        count++;

    }
    printf("%d\n", count);
 
    return 0;
}