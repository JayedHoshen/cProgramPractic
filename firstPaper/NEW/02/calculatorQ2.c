// home work - 2 : use double type data;

#include <stdio.h>

int main()
{
    double num1, num2, result;

    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter another number: ");
    scanf("%lf", &num2);

    result = num1 + num2;
    printf("%0.2lf + %0.2lf = %0.2lf\n", num1, num2, result);

    result = num1 - num2;
    printf("%0.2lf - %0.2lf = %0.2lf\n", num1, num2, result);

    result = num1 * num2;
    printf("%0.2lf * %0.2lf = %0.2lf\n", num1, num2, result);

    result = num1 / num2;
    printf("%0.2lf / %0.2lf = %0.2lf\n", num1, num2, result);

    return 0;
}
