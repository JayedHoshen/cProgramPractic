#include<stdio.h> // vowel or consonent

int main()
{
    char ch = 'k';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' ||ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is vowel \n",ch);
    }
    else {
        printf("%c is consonant\n",ch);
    }

    return 0;
}

/*#include<stdio.h> // Logical OR operator using

int main()
{
    int num = 50;

    if(num >= 1 || num <= 10) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}

#include<stdio.h> // Letter upper case of lower case?

int main()
{
    char ch = 'k';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case \n",ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case \n",ch);
    }

    return 0;
}

#include<stdio.h> //Without modulus operator (*,/,-);

int main()
{
    int number = 5, div, mul, sub;

    div = number / 2;
    mul = div * 2;
    sub = number - mul;

    printf("%d \n", sub);

    return 0;
}

#include<stdio.h>//Nine Example

int main()
{
    int number = 9;

    if(number % 2 == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}

#include<stdio.h>//Eight Example

int main()
{
    int number, remainder;

    number = 5;

    remainder = number % 2;

    if (remainder == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}

#include<stdio.h>//Seven Example

int main()
{
    int n = 10;

    if(n < 30) {
        printf("n is less than 30.\n");
    }
    if(n < 50) {
        printf("n is less than 50.\n");
    }

    return 0;
}

#include<stdio.h>//Six Example

int main()
{
    int n = 10;

    if(n < 30) {
        printf("n is less than 30.\n");
    }
    else if(n < 50) {
        printf("n is less than 50.\n");
    }

    return 0;
}

#include<stdio.h>//Fifth Example

int main()
{
    int number = 12;

    if(number > 10) {
        printf("The number is greater than ten \n");
    }

    return 0;
}

#include<stdio.h>//Forth Example

int main()
{
    int n = 10;

    if(n < 0) {
        printf("The number is negative\n");
    }
    else if(n > 0) {
        printf("The number is positive\n");
    }
    else {
        printf("The number is zero!\n");
    }

    return 0;
}

#include<stdio.h>// Third Example

int main()
{
    int n = 10;

    if(n < 0) {
        printf("The number is negative\n");
    }
    else if(n > 0) {
        printf("The number is positive\n");
    }
    else if(n == 0) {
        printf("The number is zero!\n");
    }

    return 0;
}

#include<stdio.h>//Second Example

int main()
{
    int n;
    n = 10;

    if(n < 0){
        printf("The number is negative\n");
    }
    else {
        printf("The number is positive\n");
    }

    return 0;
}

#include<stdio.h>//First Example

int main()
{
    int n;

    n = 998;

    if(n >= 0){
        printf("The number is positive\n");
    }
    else {
        printf("The number is negative\n");
    }

    return 0;
}*/
