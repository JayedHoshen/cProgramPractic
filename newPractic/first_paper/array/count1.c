#include <stdio.h>

int main()
{
    int marks, i, count;
    int total_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81,
    80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};

    for (marks = 50; marks <= 100; marks++) {
        count = 0;

        for (i = 0; i < 40; i++) {
            if (total_marks[i] == marks) {
                count++;
            }
        }

        printf("Marks: %d Count: %d\n", marks, count);
    }

    return 0;
}
