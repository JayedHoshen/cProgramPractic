#include <stdio.h>

void recurse(int count)
{
    if(count > 5){
        return;
    }
    printf("Count = %d\n", count); // 1, 2, 3, 4, 5
    recurse(count + 1);
    printf("Count = %d\n", count); // 5, 4, 3, 2, 1
}

int main()
{
    recurse(1);
    return 0;
}
