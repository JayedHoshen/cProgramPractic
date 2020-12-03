#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50};
    int n = 5, i;
    int temp;

    for (i = 0; i < n / 2; i+= 1) {
        // exchange value of ara[i] and ara[n - 1 - i]
        temp = ara[i];
        ara[i] = ara[n - 1 - i];
        ara[n - 1 - i] = temp;
    }

    for (i = 0; i < 5; i+= 1) {
        printf("%d\n", ara[i]);
    }

    return 0;
}
