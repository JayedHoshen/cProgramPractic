#include<stdio.h> // using malloc but not free memory
#include<stdlib.h>

int main()
{
    int *marks;
    int i, n;
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    // now allocate memory
    marks = (int *)malloc(sizeof(int) * n);

    printf("Enter the marks for each student: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    printf("Now here you can see the values:\n");
    // Now print the marks array
    for(i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
