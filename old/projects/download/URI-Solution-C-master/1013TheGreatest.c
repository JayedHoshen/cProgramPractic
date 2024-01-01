#include <stdio.h>
 
int main() {
 
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    max = (a+b+abs(a-b))/2;

    a = max;
    b = c;

    max = (a+b+abs(a-b))/2;

    printf("%d eh o maior\n", max);
 
    return 0;
}