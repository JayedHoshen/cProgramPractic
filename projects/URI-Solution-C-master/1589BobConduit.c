#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        int r1, r2, r3;

        scanf("%d %d", &r1, &r2);

        r3=r1+r2;

        printf("%d\n", r3);
    }

    return 0;
}
