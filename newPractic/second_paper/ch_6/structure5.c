#include <stdio.h>
#include <string.h>

struct nametype {
    char first[20];
    char last[20];
};

struct student {
    int id;
    struct nametype name;
};

int main()
{
    struct student one;

    printf("Enter your id = ");
    scanf("%d", &one.id);
    printf("Enter first name = ");
    scanf("%s", one.name.first);
    printf("Enter last name = ");
    scanf("%s", one.name.last);
    printf("\n");

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}
