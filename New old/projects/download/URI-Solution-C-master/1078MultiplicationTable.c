#include <stdio.h>
 
int main() {
 
    int i, sum, N;
    scanf("%d", &N);
    
    for(i=1; i<=10; i++)
    {
        sum = i*N;
        printf("%d x %d = %d\n", i, N, sum);
    }
 
    return 0;
}