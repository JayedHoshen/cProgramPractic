#include <stdio.h>

int main()
{
    int i;
    int total_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81,
    80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};
    int marks_count[101];

    for (i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++) {
        marks_count[total_marks[i]]++;
    }

    for (i = 50; i <= 100; i++) {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }


    return 0;
}
