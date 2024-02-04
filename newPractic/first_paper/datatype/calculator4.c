#include <stdio.h>

int main()
{
    char ch;
    double num1, num2, result;

    printf("Please enter a number = ");
    scanf("%lf", &num1);

    printf("Please enter another number = ");
    scanf("%lf", &num2);

    ch = '+';
    result = num1 + num2;
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, ch, num2, result);

    ch = '-';
    result = num1 - num2;
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, ch, num2, result);

    ch = '*';
    result = num1 * num2;
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, ch, num2, result);

    ch = '/';
    result = num1 / num2;
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, ch, num2, result);

    return 0;
}
