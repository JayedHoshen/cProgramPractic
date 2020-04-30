#include <stdio.h>

int main()
{
    int a, b, c;

    // final and not effieient
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (b != a && c != a && c != b) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

   /*
   // first solution and efficient (run time)
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <=3; b++) {
            if (b != a) {
                for (c = 1; c <= 3; c++) {
                    if (c != a && c != b) {
                        printf("%d, %d, %d\n", a, b, c);
                    }
                }
            }
        }
    }
   // second
   for (a = 1; a <= 3; a++) {
        for (b = 1; b <=3 && b != a; b++) {
            for (c = 1; c <= 3 && c != a && c != b; c++) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
   // first
     for (a = 1; a <= 3; a++) {
        for (b = 1; b <=3; b++) {
            for (c = 1; c <= 3; c++) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
   */

    return 0;
}
