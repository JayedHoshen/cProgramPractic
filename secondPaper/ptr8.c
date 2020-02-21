#include<stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;

    p3 = &c3;
    p2 = &c2;
    p1 = &c1;

    printf("%c, %c, %c\n", *p1, *p2, *p3);

    return 0;
}

/*
#include<stdio.h> //second

int main()
{
    char s[] = "Bangladesh";
    char *p;

    p = s;

    printf("Name of our country: %s\n", p);

    return 0;
}

#include<stdio.h> // first

int main()
{
    char s[] = "Bangladesh";

    printf("Name of our country: %s\n", s);
    printf("Address of s: %p\n", s);

    return 0;
}
*/
