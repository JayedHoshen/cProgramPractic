#include<stdio.h>

enum COLOR {NO_COLOR = 0, RED = 40, GREEN = 44, BLUE = 60};

int main()
{
    printf("Value: %d\n", NO_COLOR);
    printf("Value: %d\n", RED);
    printf("Value: %d\n", BLUE);
    printf("Value: %d\n", GREEN);

    return 0;
}

/*
#include<stdio.h> // Constant list

enum COLOR {NO_COLOR, RED, GREEN, BLUE};

int main()
{
    printf("Value: %d\n", NO_COLOR);
    printf("Value: %d\n", RED);
    printf("Value: %d\n", GREEN);
    printf("Value: %d\n", BLUE);

    return 0;
}

*/
