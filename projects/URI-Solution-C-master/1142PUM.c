#include <stdio.h>
 
int main() {
 
    int n, i, j, k=0;;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("%d ", j+k);
        }
        printf("PUM\n");
        k+=4;
    }
 
    return 0;
}