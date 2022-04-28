// Write a program to your favorite language to print the first 100 prime number - C
#include <stdio.h>

int main()
{
    int n, count = 1, flag, i = 2, j;

    printf("Enter how many prime number = ");
    scanf("%d", &n);

    while (count <= n) {
        flag = 0;
        for (j = 2; j <= i/2; j++) {
            if (i%j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    return 0;
}
