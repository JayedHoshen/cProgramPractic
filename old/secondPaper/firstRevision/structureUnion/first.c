#include<stdio.h> // second solution (using strcpy());
#include<string.h>

int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    strcpy(one.name, "Jayed Hoshen");

    printf("Id: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}

/*#include<stdio.h> // first solution (using pointer);

int main()
{
    struct student {
        int id;
        char* name;
    };
    struct student one;

    one.id = 1;
    one.name = "Jayed Hoshen";

    printf("Id: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}

/*
#include<stdio.h> // wrong code

int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    one.name = "Jayed Hoshen";

    printf("Id: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}

*/
