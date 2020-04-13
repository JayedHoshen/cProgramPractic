// Solution-2: using strcpy() method

#include <stdio.h>
#include <string.h>

int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    strcpy(one.name, "Tahmid Rafi");

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}



/*
// Solution-1: using char pointer

#include <stdio.h>

int main()
{
    struct student {
        int id;
        char* name;
    };

    struct student one;

    one.id = 1;
    one.name = "Tahmid Rafi";

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}

// error code: not use char assignment
#include <stdio.h>

int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    one.name = "Tahmid Rafi"; // not use assignment operator of char data type

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);


    return 0;
}

*/
