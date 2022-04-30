// Read five number from keyboard and display the
// smaller, larger and average of these number - C
#include <stdio.h>

int main()
{
    int i, j, temp, max, min, sum = 0, a[5], n = 5;
    float avg;

    for (i = 0; i < n; i++) {
        printf("Enter %d th value = ", i+1);
        scanf("%d", &a[i]);
    }

    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        else if (a[i] < min) min = a[i];
    }

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("The small value is = %d\n", min);
    printf("The large value is = %d\n", max);
    printf("The average value is = %f\n", avg);

    return 0;
}
