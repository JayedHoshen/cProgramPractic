#include <stdio.h> // permutation 3 numbers

int main()
{
    int a, b, c, d;

    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (b != a && c != a && c != b) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}

/* // permutation 4 numbers
#include <stdio.h>

int main()
{
    int a, b, c, d;

    for (a = 1; a <= 4; a++) {
        for (b = 1; b <= 4; b++) {
            for (c = 1; c <= 4; c++) {
                for (d = 1; d <= 4; d++) {
                    if (b != a && c != a && c != b && d != a && d != b && d != c) {
                        printf("%d, %d, %d, %d\n", a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
*/
