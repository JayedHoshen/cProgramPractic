#include <stdio.h>
 
int main() {
 
    int a, n, i, sum=0;
    scanf("%d %d", &a, &n);
    while(n<=0)
    {
        scanf("%d", &n);
    }

    i=a;

    while(n--)
    {
        sum+=i;
        i++;
    }

    printf("%d\n", sum);
 
    return 0;
}