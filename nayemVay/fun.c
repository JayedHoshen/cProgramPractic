#include <stdio.h>

int main() {

    float num1, num2, result;

    printf("Please Enter Two Numbers(4 2.3): ");
    scanf("%f %f", &num1, &num2);

    result = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);

    result = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, result);

    result = num1 * num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, result);

    result = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, result);


    return 0;
}