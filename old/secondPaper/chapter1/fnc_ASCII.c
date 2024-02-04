#include <stdio.h>

char  get_char(char ch)
{
    for(ch = 48; ch <= 57; ch++) {
        return 1;
    }

    return 0;
}

int main()
{
    char ch;

    printf("Enter any char: ");
    scanf("%c", &ch);

    get_char(ch);

    return 0;
}
