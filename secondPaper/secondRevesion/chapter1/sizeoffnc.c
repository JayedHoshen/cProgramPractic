#include <stdio.h>

int main()
{
    register int num;
    register char ch;
    register double d_num;
    register float f_num;

    printf("%lu\n", sizeof(int));
    printf("Size of int: %d\n", sizeof(num));
    printf("Size of char: %d\n", sizeof(ch));
    printf("Size of double: %d\n", sizeof(d_num));
    printf("Size of float: %d\n", sizeof(f_num));

    return 0;
}
