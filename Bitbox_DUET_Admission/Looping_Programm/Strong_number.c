// Write a program to check given number is strong number or not - C
#include <stdio.h>

int main()
{
    int i, f, r, num, temp, sum = 0;

    printf("Enter a number = ");
    scanf("%d", &num);

    temp = num;

    while (num) {
        i = 1, f = 1;
        r = num % 10;
        while (i <= r) {
            f = f * i;
            i++;
        }
        sum = sum + f;
        num = num / 10;
    }

    if (sum == temp) printf("%d is a strong number.\n", temp);
    else printf("%d is not a strong number.\n", temp);

    return 0;
}
