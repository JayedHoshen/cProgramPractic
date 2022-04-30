// Reads five numbers from keyboard and display
// the smaller, larger and average of those numbers - C
#include <stdio.h>

int main()
{
    int a[5], i;

    printf("Enter your 5 number = ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int minm = a[0], maxm = a[0], sum = 0;

    for (i = 0; i < 5; i++) {
        if (minm >= a[i]) minm = a[i];
        if (maxm <= a[i]) maxm = a[i];

        sum += a[i];
    }
    float avg = (float)sum / 5;

    printf("Minimum number = %d\n", minm);
    printf("Maximum number = %d\n", maxm);
    printf("Average = %.2f\n", avg);

    return 0;
}
