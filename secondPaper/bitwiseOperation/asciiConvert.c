#include<stdio.h>

char to_upper(char ch)
{
    return ch & 95;
}

char to_lower(char ch)
{
    return ch | 32;
}


int main()
{
    char *str = "AbcdEfGhiJklMnoPQrstuvwXyz";
    for(int i = 0; i < 26; i++) {
        printf("Uppercase: %c \t", to_upper(str[i]));
        printf("Lowercase: %c \n", to_lower(str[i]));
    }
    return 0;
}
