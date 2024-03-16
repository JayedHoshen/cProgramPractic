#include <stdio.h>

void reverseString(char *str) {
    if(*str) {
        reverseString(str+1);
        printf("%c", *str);
    }
}

int main()
{
    char str[100];

    printf("Enter a string = ");
    scanf("%[^\n]*s", str);

    printf("\nAfter reverse: ");
    reverseString(str);
    printf("\n");

    return 0;
}
