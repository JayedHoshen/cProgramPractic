#include <stdio.h>

int string_length(char ara[]) {
    int i = 0;

    while(ara[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
    char country[100];

    int length;

    while(NULL != gets(country)) {
        length = string_length(country);
        printf("%s length: %d\n", country, length);
    }

    return 0;
}
