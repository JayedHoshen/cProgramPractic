#include <stdio.h>
 
int main() {
 
    double num[6], sum=0;
    int i, count=0;
    
    for(i=0; i<6; i++)
    {
        scanf("%lf", &num[i]);
    }
    
    for(i=0; i<6; i++)
    {
        if(num[i] > 0)
        {
            sum += num[i];
            count++;
        }
    }
    
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", sum/count);
 
    return 0;
}