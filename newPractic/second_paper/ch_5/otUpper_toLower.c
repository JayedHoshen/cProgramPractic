#include <stdio.h>

char toUpper(char ch) {
    return ch & 95;
}

char toLower(char ch) {
    return ch | 32;
}

int main()
{
    char *str = "abCDEfgHijklmnOPQrStuVwXyz";
    for(int i = 0; i < 26; i++) {
        printf("Uppercase : %c, ", toUpper(str[i]));
        printf("Lowercase : %c, ", toLower(str[i]));
    }

    return 0;
}
