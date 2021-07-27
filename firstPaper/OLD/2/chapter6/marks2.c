#include <stdio.h>

int main()
{
    int marks, i, count;
    int total_marks[] = {80, 76, 69, 61, 71, 81, 53, 81, 64, 68, 44, 71, 67, 54, 37,
                         82, 51, 78, 71, 57, 78, 56, 81, 82, 84, 65, 56, 71, 78, 76,
                         80, 71, 79, 58, 75, 57, 67, 69, 58, 69};

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
