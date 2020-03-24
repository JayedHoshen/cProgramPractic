#include <stdio.h>
 
int main() {
 
    int M, N;
    scanf("%d %d", &M, &N);

    while(M > 0 && N > 0)
    {
        int i, sum=0, temp;
        if(M>N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        for(i=M; i<=N; i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        printf("Sum=%d\n", sum);
        scanf("%d %d", &M, &N);
    }
 
    return 0;
}