#include <stdio.h>

int main()
{
    int ft_marks[40] = {60, 78, 53, 63, 37, 89, 80, 97, 75, 55, 40, 64, 42, 48, 32,
                        57, 44, 69, 77, 80, 66, 50, 88, 95, 73, 25, 52, 90, 76, 58,
                        93, 46, 38, 29, 62, 39, 56, 59, 20, 33},
    st_marks[40] = {68, 57, 63, 81, 74, 98, 69, 54, 66, 79, 62, 41, 73, 53, 37,
                    75, 96, 80, 50, 38, 90, 76, 58, 39, 99, 78, 55, 77, 48, 89,
                    97, 83, 85, 90, 65, 75, 44, 58, 75, 62},
    final_marks[40] = {96, 85, 80, 50, 87, 68, 31, 87, 57, 68, 38, 90, 76, 58, 39,
                       99, 32, 82, 78, 55, 77, 48, 89, 97, 83, 78, 58, 58, 95, 78,
                       65, 78, 97, 56, 87, 57, 84, 79, 68, 90};
    int i, marks, count;
    double total_marks[40];

    // total marks count
    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    /* count same marks print here
    for (marks = 30; marks <= 100; marks++) {
        count = 0;

        for (i = 0; i < 40; i++) {
            if(total_marks[i] == marks) {
                count++;
            }
        }

        printf("Marks: %d Count: %d\n", marks, count);
    }*/

    //FILE *output_result;
    //output_result = fopen("result.txt", "w");

    // output here
    for (i = 1; i <= 40; i++) {
        printf("Roll NO: %d\tTotal Marks: %0.2lf\n", i, total_marks[i-1]);
        //fprintf(output_result, "%0.0lf, ", total_marks[i-1]);
        //printf("%0.0lf, ", total_marks[i-1]);
    }
    //fclose(output_result);
    return 0;
}
