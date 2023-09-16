#include<stdio.h>

int main()
{
    int num1, num2, value;
    char sign;

    printf("Please enter a number:");
    scanf("%d",&num1);

    printf("Please enter another number:");
    scanf("%d",&num2);

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    return 0;
}

/*#include<stdio.h>//Seven Example

int main()
{
    int num1, num2, result;
    char ch;

    printf("Please enter a number:");
    scanf("%d",&num1);

    printf("Please enter another number:");
    scanf("%d",&num2);

    result = num1 + num2;
    ch = '+';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 - num2;
    ch = '-';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 * num2;
    ch = '*';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    result = num1 / num2;
    ch = '/';
    printf("%d %c %d = %d\n",num1, ch, num2, result);

    return 0;
}

#include<stdio.h>//Six Example

int main()
{
    double num1, num2;

    printf("Please enter a number:");
    scanf("%lf",&num1);

    printf("Please enter another number:");
    scanf("%lf",&num2);

    printf("%lf + %lf = %lf\n",num1, num2, num1 + num2);
    printf("%lf - %lf = %lf\n",num1, num2, num1 - num2);
    printf("%lf * %lf = %lf\n",num1, num2, num1 * num2);
    printf("%lf / %lf = %lf\n",num1, num2, num1 / num2);

    return 0;
}

#include<stdio.h> //Fifth Example

int main()
{
    int num1, num2, result;

    printf("Please enter a number:");
    scanf("%d",&num1);

    printf("Please enter another number:");
    scanf("%d",&num2);

    result = num1 + num2;
    printf("%d + %d = %d\n",num1, num2, result);

    result = num1 - num2;
    printf("%d - %d = %d\n",num1, num2, result);

    result = num1 * num2;
    printf("%d * %d = %d\n",num1, num2, result);

    result = num1 / num2;
    printf("%d / %d = %d\n",num1, num2, result);

    return 0;
}

#include<stdio.h> //Forth Example

int main()
{
    int num1, num2;

    printf("Please enter a number:");
    scanf("%d",&num1);

    printf("Please enter another number:");
    scanf("%d",&num2);

    printf("%d + %d = %d\n",num1, num2, num1 + num2);
    printf("%d - %d = %d\n",num1, num2, num1 - num2);
    printf("%d * %d = %d\n",num1, num2, num1 * num2);
    printf("%d / %d = %d\n",num1, num2, num1 / num2);

    return 0;
}

#include<stdio.h> //Third Example

int main()
{
    char ch;

    printf("Enter the first letter of your name:");
    ch = getchar();
    printf("The first letter of your name is:%c\n",ch);

    return 0;
}

#include<stdio.h> //Second Example

int main()
{
    char ch;

    printf("Enter the first letter of your name:");

    scanf("%c",&ch);

    printf("The first letter of your name is:%c\n",ch);

    return 0;
}

#include<stdio.h> //First Example

int main()
{
    double a, b, sum;

    scanf("%lf %lf",&a,&b);

    sum = a + b;

    printf("Sum is: %0.3lf\n",sum);

    return 0;
}*/
