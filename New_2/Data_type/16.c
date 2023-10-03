#include <stdio.h>

int main()
{
    char ch;
    int num1, num2, result;

    printf("Please enter a number = ");
    scanf("%d", &num1);

    printf("Please enter another number = ");
    scanf("%d", &num2);

    ch = '+';
    result = num1 + num2;
    printf("%d %c %d = %d\n", num1, ch, num2, result);

    ch = '-';
    result = num1 - num2;
    printf("%d %c %d = %d\n", num1, ch, num2, result);

    ch = '*';
    result = num1 * num2;
    printf("%d %c %d = %d\n", num1, ch, num2, result);

    ch = '/';
    result = num1 / num2;
    printf("%d %c %d = %d\n", num1, ch, num2, result);

    return 0;
}
