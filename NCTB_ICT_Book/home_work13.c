#include <stdio.h>
#include <string.h>

int main()
{
    char str_input[100];
    char str[10] = "quit";

    while (1) {
        scanf("%s", str_input);

        int value = strcmp(str_input, str);

        if (value == 0) break;

        printf("%s\n", str_input);
    }

    return 0;
}
