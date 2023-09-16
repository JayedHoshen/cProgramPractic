#include <stdio.h>
 
int main() {
 
    int num[100], i, max=0, pos;;
    
    for(i=0; i<100; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<100; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
            pos = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos);
 
    return 0;
}