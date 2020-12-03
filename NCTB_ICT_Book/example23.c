// string length
#include <stdio.h>
#include <string.h>

int main()
{
    char name[80];
    int length;

    scanf("%s", name);

    length = strlen(name);

    printf("%s has %d characters.\n", name, length);

    return 0;
}
