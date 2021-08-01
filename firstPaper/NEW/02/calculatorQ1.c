// home work-1

#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);

    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);

    return 0;
}
