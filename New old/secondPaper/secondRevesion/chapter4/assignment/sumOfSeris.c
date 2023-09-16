// summition of 1 to n (formula: (n * n + 1) / 2;)
// Using recursion

#include <stdio.h>

int fnc_calls = 0;
int i = 1, sum = 0;

void seris_recurse (int n)
{
    fnc_calls += 1;

    if (n < i) {
        return;
    }
    sum += i;
    i += 1;

    seris_recurse(n);
}

int main()
{
    int n;

    printf("Enter last value of seris: ");
    scanf("%d", &n);

    seris_recurse(n);

    printf("\nSum of seris  is = %d\n", sum);
    printf("\nNumber of function calls: %d\n", fnc_calls);
    return 0;
}
