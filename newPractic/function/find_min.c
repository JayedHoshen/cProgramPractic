#include <stdio.h>

int find_min(int a[], int lenth);

int main()
{
    int ara[] = {100, 10, 53, 22, 83, 23 , 89, 132, 201, 85};
    int n = 10;

    int x = find_min(ara, n);

    printf("%d\n", x);

    return 0;
}

int find_min(int ara[], int n) {
    int i, min;
    min = ara[0];

    for(i = 1; i < n; i++) {
        if(ara[i] < min) min = ara[i];
    }

    return min;
}
