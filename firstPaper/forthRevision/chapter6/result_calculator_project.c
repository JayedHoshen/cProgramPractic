/* class nine er math subject er 40 jon student
   1st exam er 25%, 2nd exam er 25%, final exam er 50%
   write a program that printed result and same marks count
*/

#include <stdio.h>

int main()
{
    // all variable declaration
    int i, std = 3;
    int ft_marks[std], st_marks[std], final_marks[std], marks_count[101];
    double total_marks[std];

    printf("----------Start program------------\n\n");

    for (i = 0; i < std; i++) {
        // input all exam marks
        printf("Enter first exam marks (roll %d): ", i+1);
        scanf("%d", &ft_marks[i]);

        printf("Enter second exam marks (roll %d): ", i+1);
        scanf("%d", &st_marks[i]);

        printf("Enter final exam marks (roll %d): ", i+1);
        scanf("%d", &final_marks[i]);
        printf("\n");

        // total marks calculation
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    // calculate total marks
    for (i = 0; i < std; i++) {
        printf("Roll No: %d\tTotal marks: %0.2lf\n", i+1, total_marks[i]);
    }

    // =============== now count get same marks ================
    printf("\n===========count same marks============\n\n");

    // initial set 0
    for (i = 0; i <= 100; i++) {
        marks_count[i] = 0;
    }

    // counting
    for (i = 0; i < std; i++) {
        int mark = total_marks[i];
        marks_count[mark]++;
    }

    // printing count
    for (i = 1; i <= 100; i++) {
        printf("Marks: %d\tCount: %d\n", i, marks_count[i]);
    }


    return 0;
}
