#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int key, i, *item, n = 5;
    int values[] = {6, 7, 10, 1, 2};

    qsort(values, 5, sizeof(int), comparefunc); // sorting item

    while(1) {
        // print values
        printf("Original values with sort: ");
        for(i = 0; i < n; i++) {
            printf("%d ", values[i]);
        }
        // searching item
        printf("\n\nEnter the value of the key (0 to exit): ");
        scanf("%d", &key);

        if(key == 0) {
            break;
        }

        item = (int *) bsearch(&key, values, n, sizeof(int), comparefunc);

        if(item != NULL) {
            printf("Item found: %d\n", *item);
        }
        else{
            printf("Item not found in array\n");
        }
    }

    return 0;
}
