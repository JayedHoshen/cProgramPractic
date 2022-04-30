/* A Bubble sort C program. Or A program sorts and array of integer. Write down
   the code that tests the sorting algorithm of written in a program.
*/
#include <stdio.h>

int main()
{
    int i, n, step, temp, data[100];

    printf("Enter the number of elements to be sorted = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d. Enter element = ", i+1);
        scanf("%d", &data[i]);
    }

    for (step = 0; step < n-1; step++) {
        for (i = 0; i < n-step-1; i++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }

    printf("\nIn ascending order = ");

    for (i = 0; i < n; i++) {
        printf("%d, ", data[i]);
    }
    return 0;
}
