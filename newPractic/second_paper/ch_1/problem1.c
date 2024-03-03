#include <stdio.h>

int isDigit(char ch);

int main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c", &ch);

    if(isDigit(ch)) printf("Digit\n");
    else printf("Not digit\n");

    return 0;
}

int isDigit(char ch) {
    if(ch >= 48 && ch <= 57) return 1;
    return 0;
}
