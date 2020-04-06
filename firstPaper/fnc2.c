#include<stdio.h>

int test_function(int x) // recieve argument x=20
{
    int y = x; // y = 10
    x = 2 * y; // x = 20
    return (x * y); // return 20 * 10 --200
}

int main()
{
    int x = 10, y = 20, z = 30;

    z = test_function(x); // argument x is 10
    printf("%d %d %d\n", x, y, z); // x = 20, y = 20, z = 200

    return 0;
}