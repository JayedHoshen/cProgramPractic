#include <stdio.h>
 
int main() {
 
    int n, yr, mnt, day;
    
    scanf("%d", &n);
    
    yr = n/365;
    n = n%365;
    mnt = n/30;
    day = n%30;
    
    printf("%d ano(s)\n", yr);
    printf("%d mes(es)\n", mnt);
    printf("%d dia(s)\n", day);
 
    return 0;
}