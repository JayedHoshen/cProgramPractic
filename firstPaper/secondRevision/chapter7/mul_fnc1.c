#include <stdio.h>

int test_function(int x)
{
    int y = x; // 10
    x = 2 * y; // 20
    return (x * y); // 200
}

int main()
{
    int x = 10, y = 20, z = 30;

    z = test_function(x);
    printf("%d %d %d\n", x, y, z); // x = 10, y = 20, z = 200

    return 0;
}
