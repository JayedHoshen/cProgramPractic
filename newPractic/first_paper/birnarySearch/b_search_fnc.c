// Binary search function
#include <stdio.h>

int b_search (int ara[], int low, int high, int key);

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low = 0, high = 15, key = 10;

    b_search(ara, low, high, key);

    return 0;
}

int b_search (int ara[], int low, int high, int key) {
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == ara[mid]) break;
        if (key < ara[mid]) high = mid - 1;
        else low = mid + 1;
    }

    if (low > high) printf("%d is not in the array.\n", key);
    else printf("%d is found in the array. It is the %dth element of the array.\n",
                ara[mid], mid);
}
