#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[40];
};

int main()
{
    struct student one;

    scanf("%d", &one.id);
    //scanf("%s", one.name);
    scanf("%[^\n]", one.name);

    printf("Id: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
