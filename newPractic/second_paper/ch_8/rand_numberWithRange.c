// random number generate (0 to 100)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("%d\n", rand()%100);

    return 0;
}
