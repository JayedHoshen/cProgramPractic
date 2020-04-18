#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    //srand((unsigned) time(&t));
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand() % 100); // genarate random number 0 to 100
    }

    return 0;
}
