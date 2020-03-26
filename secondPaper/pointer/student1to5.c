#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *studt[5], clas[5];
    int row, colm, numberOfStudents;

    for(row = 0; row < 5; row++) {
        printf("Enter how many students of class %d: ", row+1);
        scanf("%d", &numberOfStudents);
        clas[row] = numberOfStudents;
        studt[row] = (int *) malloc(sizeof(int) * numberOfStudents);
        if(studt[row] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        for(colm = 0; colm < numberOfStudents; colm++) {
            printf("Enter marks for student %d: ", colm + 1);
            scanf("%d", &studt[row][colm]);
        }
    }
    // now printf the results
    printf("Output\n");
    for(row = 0; row < 5; row++) {
        for(colm = 0; colm < clas[row]; colm++) {
            printf("%4d", studt[row][colm]);
        }
        printf("\n");
    }

    return 0;
}
