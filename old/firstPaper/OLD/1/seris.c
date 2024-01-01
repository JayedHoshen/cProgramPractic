/*
#include<stdio.h> // 1 + 3 + 5 + ....... + n = ? Positive number.

int main()
{
    int i, n, sum;

    printf("Enter last value: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Please enter any positive number.");
    }
    else {
        for(i = 1, sum = 0; i <= n; i = i + 2) {
            sum = sum + i;
        }

        printf("Summition is %d\n", sum);
    }

    return 0;
}

#include<stdio.h> // 1 + 2 + 3 + .......... + n = ? using loop

int main()
{
    int i, n, sum;

    printf("Enter last value:");
    scanf("%d", &n);

    for(i = 1, sum = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("Summition is %d\n", sum);

    return 0;
}

#include<stdio.h> // // 1 + 2 + 3 + .......... + n = ? (without loop);

int main()
{
    int n, sum;

    printf("Enter last value:");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Summition is %d\n", sum);

    return 0;
}
*/
