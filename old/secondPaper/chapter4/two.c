#include <stdio.h>

int x = 1;

void myfnc(int y)
{
    y = y * 2; // y = 10
    x = x + 10; // x = 20
    printf("myfnc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 5;

    x = 10;

    myfnc(y);
    printf("main, x = %d, y = %d\n", x, y); // x = 20, y = 5

    return 0;
}
