#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int  n, i, sum = 0;

    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("Sum of %d Numbers is: %d\n", argc-1, sum);

    return 0;
}
