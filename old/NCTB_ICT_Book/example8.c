#include <stdio.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age >= 18 && age <= 35) {
        printf("Yes, you are eligible.\n");
    }
    else {
        printf("Sorry, you are not eligible.\n");
    }

    return 0;
}
