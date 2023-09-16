#include <stdio.h>

int main()
{
    int i;
    int total_marks[] = {80, 76, 69, 61, 71, 81, 53, 81, 64, 68, 44, 71, 67, 54, 37,
                         82, 51, 78, 71, 57, 78, 56, 81, 82, 84, 65, 56, 71, 78, 76,
                         80, 71, 79, 58, 75, 57, 67, 69, 58, 69};

    int marks_count[101];

    for (i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++) {
        marks_count[total_marks[i]]++;
    }

    for (i = 35; i <= 100; i++) {
        if (marks_count[i] > 0) {
            printf("Marks: %d student %d\n", i, marks_count[i]);
        }
    }

    return 0;
}
