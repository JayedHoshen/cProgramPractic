#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void * a, const void * b)
{
    //return (*(int)b - *(int)a);
    return (*(int*)a - *(int*)b);
}

int main()
{



    // now here start binary search

    int key, *item, n = 5;
    int values[] = {10, 8, 5, 2, 1};

    while(1) {
        printf("Enter the value of key (0 to exit): ");
        scanf("%d", &key);
        if(key == 0) {
            break;
        }

        item = (int *) bsearch(&key, values, n, sizeof(int), comparefunc);

        if(item != NULL) {
            printf("Item found: %d\n", *item);
        }
        else {
            printf("Item not found in array\n");
        }
    }


    return 0;
}
