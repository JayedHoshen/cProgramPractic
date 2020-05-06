#include <stdio.h>

int string_length(char str[])
{
    int i, length = 0;

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    /* other solution
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
    */

    return length;
}

int main()
{
    char country[100];

    int length;

    while(1 == scanf("%s", country)) { // or: &country
        length = string_length(country);
        printf("length: %d\n", length);
    }

    return 0;
}
