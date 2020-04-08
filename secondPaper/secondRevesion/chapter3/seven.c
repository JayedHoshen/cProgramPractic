#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("inp.txt", "r");
    if(fp == NULL) {
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("%c\n", (char)ch); // A
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // B

    fseek(fp, sizeof(char) * 3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // F

    fclose(fp);

    return 0;
}
