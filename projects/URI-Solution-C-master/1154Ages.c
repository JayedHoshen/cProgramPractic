#include <stdio.h>
 
int main() {
 
    double avg;
    int count=0, sum=0, n;
    
    while(1)
    {
        scanf("%d", &n);
        if(n<0) break;
        
        sum+=n;
        count++;
    }
    
    avg = (double)sum/count;
    printf("%.2lf\n", avg);
 
    return 0;
}