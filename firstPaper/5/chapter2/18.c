// double using
#include <stdio.h>

int main()
{
    double num1, num2, result;
    char sign;

    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter another number: ");
    scanf("%lf", &num2);

    result = num1 + num2;
    sign = '+';
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, sign, num2, result);

    result = num1 - num2;
    sign = '-';
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, sign, num2, result);

    result = num1 * num2;
    sign = '*';
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, sign, num2, result);

    result = num1 / num2;
    sign = '/';
    printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, sign, num2, result);

    return 0;
}
