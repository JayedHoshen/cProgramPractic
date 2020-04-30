#include <stdio.h>

int main() {

    int n, r = 1;
    scanf("%d", &n);

    while(n--)
    {
        if(r)
        {
            printf("Ho");
        }

        if(!r)
        {
            printf(" Ho");

        }

        r = 0;

    }
    printf("!\n");

    return 0;
}
