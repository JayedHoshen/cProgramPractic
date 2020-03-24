#include <stdio.h>
 
int main() {
 
    long int N, i;
    scanf("%ld", &N);
    if(N>5 && N<2000)
    {
        for(i=1; i<=N; i++)
        {
            if(i%2==0)
            {
                printf("%ld^2 = %ld\n", i, i*i);
            }
        }
    }
 
    return 0;
}