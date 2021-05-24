#include <stdio.h>

int main()
{
    int i, ft_marks[45], st_marks[45], final_marks[45];
    double total_marks[45];

    for (i = 0; i < 40; i++) {
        printf("\n<..........Enter %dth Student marks ..........>\n\n", i+1);

        printf("First exam marks: ");
        scanf("%d", &ft_marks[i]);

        printf("Second exam marks: ");
        scanf("%d", &st_marks[i]);

        printf("Final exam marks: ");
        scanf("%d", &final_marks[i]);
    }

    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;

        printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i+1, total_marks[i]);
    }

    return 0;
}
