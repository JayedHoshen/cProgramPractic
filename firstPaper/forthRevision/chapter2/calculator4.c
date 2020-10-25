#include <stdio.h>

int main()
{
    int num1, num2, result;
    char sign;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sign = '+';
    result = num1 + num2;
    printf("%d %c %d = %d\n", num1, sign, num2, result);

    sign = '-';
    result = num1 - num2;
    printf("%d %c %d = %d\n", num1, sign, num2, result);

    sign = '*';
    result = num1 * num2;
    printf("%d %c %d = %d\n", num1, sign, num2, result);

    sign = '/';
    result = num1 / num2;
    printf("%d %c %d = %d\n", num1, sign, num2, result);

    return 0;
}
