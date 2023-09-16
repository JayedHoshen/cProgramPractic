#include <stdio.h>
 
int main() {
 
        long n, sec, m, min, hr;

        scanf("%ld", &n);

        sec = n % 60;
        m = n / 60;
        min = m % 60;
        hr = m / 60;

        printf("%ld:%ld:%ld\n", hr, min, sec);

 
    return 0;
}