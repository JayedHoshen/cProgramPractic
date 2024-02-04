// string compare
#include <stdio.h>

int string_compare(char a[], char b[]);
int string_length(char str[]);

int main()
{
    char ara1[100] = "Banglsh" , ara2[100] = "bangladesh";

    string_compare(ara1, ara2);

    return 0;
}

int string_compare(char a[], char b[]) {
    int i, j;

    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] < b[i]) return -1;
        else if (a[i] > b[i]) return 1;
    }

    if(string_length(a) == string_length(b)) return 0;
    if(string_length(a) < string_length(b)) return -1;
    if(string_length(a) > string_length(b)) return 1;
}

int string_length(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}
