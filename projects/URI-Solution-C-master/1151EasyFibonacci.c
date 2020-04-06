#include <stdio.h>
 
int main() {
 
    int n, i, first=0, second=1,sum;;
    scanf("%d", &n);
    printf("%d %d", first, second);

    for(i=1; i<=n-2; i++)
    {
        sum = first+second;
        printf(" %d", sum);
        first = second;
        second = sum;
    }
    printf("\n");

 
    return 0;
}