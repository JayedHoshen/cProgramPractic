// Get the marks student and print the average marks - C
#include <stdio.h>

int main()
{
    int i, n;
    float marks, avg, sum = 0.0;

    printf("Enter total numbers of student = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks of student %d = ", i);
        scanf("%f", &marks);

        sum += marks;
    }
    avg = sum / n;

    printf("Average marks = %.2f\n", avg);

    return 0;
}
