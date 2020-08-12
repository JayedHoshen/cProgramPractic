#include <stdio.h>

int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};
    int i, length;

    printf("Original value: %s\n", country);

    length = 10;

    for (i = 0; i < length; i++) {
        if (country[i] >= 65 && country[i] <= 90) {
            country[i] = 97 + (country[i] - 65);
        }
    }

    printf("Convert value: %s\n", country);

    return 0;
}
