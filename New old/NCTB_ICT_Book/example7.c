#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Your grade is A+\n");
    }
    else if (marks >= 70) {
        printf("Your grade is A\n");
    }
    else if (marks >= 60) {
        printf("Your grade is A-\n");
    }
    else if (marks >= 50) {
        printf("Your grade is B\n");
    }
    else if (marks >= 40) {
        printf("Your grade is C\n");
    }
    else if (marks >= 33) {
        printf("Your grade is D\n");
    }
    else {
        printf("Your grade is F\n");
    }

    return 0;
}
