#include <stdio.h>
 
int main() {
 
    int n, in=0, out=0;
    scanf("%d", &n);
    while(n--)
    {
        int x;
        scanf("%d", &x);

        if(x>=10 && x<=20) in++;
        else out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}