#include <stdio.h>

int main()
{
    char *str = "Bangladesh";

    printf("%c, %c, %c, %c\n", *str, *(str + 1), *(str + 2), *(str + 3)); // B, a, n, g

    printf("%c, %c, %c, %c\n", *str, *str + 1, *str + 2, *str + 3); // B, C, D, E


    return 0;
}
