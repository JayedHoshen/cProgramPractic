/* ==========---------- Math Final Result Calculating ----------==========
    Author: Jayed Hoshen
    Version: 0.01
    Initial Release: 30-04-2020
    Input: First exam 25%, Second exam 25% and Final exam 50% marks
    Output: Total marks of math
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *output_marks;
    output_marks = fopen("result.txt", "w");
    int n , *ft_marks, *st_marks, *final_marks; // n = student_roll
    double *total_marks;
    int i;

    printf("...Enter Student of the Math Subject (less than 2147483647) = ");
    scanf("%d", &n);
    // ...................Dynamicaly memory allocating.........................//

    ft_marks = (int *) malloc(sizeof(int) * n);
    st_marks = (int *) malloc(sizeof(int) * n);
    final_marks = (int *) malloc(sizeof(int) * n);
    total_marks = (double *) malloc(sizeof(double) * n);


    // ....................Input all Exam marks here........................//
    printf("========-------- Math Final Result Calculate this programm---------========\n\n");
    printf("\n------------===== Input here Your All Exam marks (math) ====------------\n\n");
    for (i = 0; i < n; i++) {
        printf("%10dth Roll Marks --------\n", i+1);

        printf("%20d. First Exam marks: ", i+1);
        scanf("%d", &ft_marks[i]);

        printf("%20d. Mid. Exam marks: ", i+1);
        scanf("%d", &st_marks[i]);

        printf("%20d. Final Exam marks: ", i+1);
        scanf("%d", &final_marks[i]);
    }


    // ............................All Calculating here.......................

    // total marks calculate
    for (i = 0; i < n; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    // counting same marks of student
    int marks_count[101];

    for (i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        marks_count[(int)total_marks[i]]++;
    }


    // .............................Math Result here...........................

    printf("\n--------------------All Subject Result here (math)--------------------\n\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d\tTotal Marks: %0.2lf\n", i+1, total_marks[i]);
        fprintf(output_marks, "Roll: %d, Total Marks: %0.2lf\n", i+1, total_marks[i]);
    }


    // count same marks
    printf("\n------------Get Same Marks of Students-----------\n\n");
    for (i = 0; i <= 100; i++) {
        if (marks_count[i] > 0) {
            printf("Marks %d student %d\n", i, marks_count[i]);
        }
    }


    // .................Now free memory...............
    free(ft_marks);
    free(st_marks);
    free(final_marks);
    free(total_marks);

    // file close
    fclose(output_marks);

    return 0;
}
