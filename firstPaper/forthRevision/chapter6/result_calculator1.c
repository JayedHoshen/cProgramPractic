#include <stdio.h>

int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 96, 92, 95,
                        51, 48, 67, 49, 41, 90, 42, 83, 47, 85, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},
        st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 52, 49, 41, 42, 47,
                        42, 90, 42, 86, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 55, 92, 59, 79},
        final_marks[40] = {87, 51, 48, 67, 49, 41, 90, 92, 83, 97, 85, 69, 82, 82, 58, 69, 67, 53, 56, 71,
                        62, 42, 90, 42, 86, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 55, 92, 59};
    int i, count[101];
    double total_marks[40];

    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for (i = 1; i <= 40; i++) {
        printf("Roll No: %d\tTotal Marks: %0.2lf\n", i, total_marks[i-1]);
    }

    // now count get same marks
    printf("\n===========count same marks============\n\n");

    for (i = 0; i <= 100; i++) {
        count[i] = 0;
    }
    for (i = 0; i < 40; i++) {
        int mark = total_marks[i];
        count[mark]++;
    }

    for (i = 50; i <= 90; i++) {
        printf("Marks: %d\tCount: %d\n", i, count[i]);
    }

    return 0;
}
