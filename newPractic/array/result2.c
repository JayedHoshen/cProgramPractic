#include <stdio.h>

int main()
{
    int n, i;

    printf("Total student number = ");
    scanf("%d", &n);

    int ft_marks[n], st_marks[n], final_marks[n];
    double total_marks[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter %dth student Marks----------\n", i+1);

        printf("First Exam marks = ");
        scanf("%d", &ft_marks[i]);

        printf("Second Exam marks = ");
        scanf("%d", &st_marks[i]);

        printf("Final Exam marks = ");
        scanf("%d", &final_marks[i]);

        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;

        printf("\nRoll %d --->\tTotal Marks: %0.2lf\n", i+1, total_marks[i]);
    }

    return 0;
}
