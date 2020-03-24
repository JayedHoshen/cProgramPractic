#include <stdio.h>
 
int main() {
 
    int i, j, X;
    scanf("%d", &X);
    
    for(i=X, j=1; j<=6; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
            j++;
        }
    }
 
    return 0;
}