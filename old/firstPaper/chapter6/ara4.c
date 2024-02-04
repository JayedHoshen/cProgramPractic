#include <stdio.h>

int main()
{
    int my_ara[4] = {5, 10, 15, 20};

    my_ara[0] = 100;
    my_ara[2] = 200;
    my_ara[3] = 300;

    printf("%d, %d, %d, %d\n", my_ara[0], my_ara[1], my_ara[2], my_ara[3]);

    return 0;
}
