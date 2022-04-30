// Write a program to reverse a given number - C
#include <stdio.h>

int main()
{
    int r, num, rev_num = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    while (num) {
        r = num % 10;
        rev_num = rev_num * 10 + r;
        num = num / 10;
    }

    printf("Reversed of number = %d\n", rev_num);


    return 0;
}
