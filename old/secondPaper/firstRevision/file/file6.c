#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in;
    char *input_file = "image1.jpg";
    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp_in, 0, SEEK_END);

    printf("File Size: %ld bytes\n", ftell(fp_in));

    printf("File Size (KiloByte): %ld KB\n", ftell(fp_in) / 1024);

    fclose(fp_in);

    return 0;
}



/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("in1.txt", "r");
    if(fp == NULL) {
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, sizeof(char) * 3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}
*/
