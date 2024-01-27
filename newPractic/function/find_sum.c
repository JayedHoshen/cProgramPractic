#include <stdio.h>

int find_sum(int a[], int n);

int main()
{
    int i, n, s;

    printf("Enter series length = ");
    scanf("%d", &n);

    int ara[n];

    printf("\nEnter Series number ---------\n");

    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    s = find_sum(ara, n);
    printf("Summation = %d\n", s);

    return 0;
}

int find_sum(int ara[], int n){
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum += ara[i];
    }

    return sum;
}
