#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 10) { // while(1), while(1==1) are same
        printf("%d\n", n);
    }
    n++;

    return 0;
}
