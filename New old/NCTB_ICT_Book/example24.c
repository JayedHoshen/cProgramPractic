// string compare
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[80], s2[80];
    int value;

    scanf("%s %s", s1, s2);

    value = strcmp(s1, s2);

    if (value == 0) {
        printf("\n%s and %s are equal.\n", s1, s2);
    }
    else if (value > 0) {
        printf("\n%s is greater than %s.\n", s1, s2);
    }
    else {
        printf("\n%s is smaller than %s.\n", s1, s2);
    }

    return 0;
}
