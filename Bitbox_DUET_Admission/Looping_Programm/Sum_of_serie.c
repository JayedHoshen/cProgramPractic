// 1*1 - 3*3 + 5*5 -...... + n*n = ? - C
#include <stdio.h>

int main()
{
    int i, j, n, sum = 0, num = 1;

    printf("Enter upper limit = ");
    scanf("%d", &n);

    for (i = 1; num <= n; i++) {
        if (i%2 != 0) sum += (num*num);
        else sum -= (num*num);

        num += 2;
    }

    printf("Sum : %d\n", sum);

    return 0;
}
