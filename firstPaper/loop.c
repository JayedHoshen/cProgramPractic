#include<stdio.h>

int main()
{
    int a, b, c;

    for(a= 1; a <= 3; a++) {
        for(b = 1; b <= 3; b++) {
           for(c = 1; c <= 3; c++) {
                if(b != a && c != a && c != b) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
    /*
    for(a= 1; a <= 3; a++) { // third and best for runtimes
        for(b = 1; b <= 3; b++) {
            if(b != a) {
                for(c = 1; c <= 3; c++) {
                    if(c != a && c != b) {
                        printf("%d, %d, %d\n", a, b, c);
                    }
                }
            }
        }
    }

    for(a= 1; a <= 3; a++) { // second
        for(b = 1; b <= 3 && b !=a; b++) {
            for(c = 1; c <= 3 && c != a && c != b; c++) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }

    for(a = 1; a <= 3; a++) { //first
        for(b = 1; b <= 3; b++) {
            for(c = 1; c <= 3; c++) {
                printf("%d, %d, %d\n",a , b, c);
            }
        }
    }
    */

    return 0;
}

/*
#include<stdio.h> //special program

int main()
{
    int n, m, i, j;

    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        scanf("%d",&m);

        for(j = 10; j <= m; j++) {
            if(j % 11 == 0) {
                continue;
            }
            printf("%d\n",j);
        }
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int n = 5;

    //calculated 5th multiply table using while loop
    int i = 1;
    while(i <= 10) {
        printf("%d X %d = %d\n", n, i, n*i);
        i = i + 1;
    }
    // using for loop
    for (int i = 1; i <= 10; i = i + 1) {
        printf("%d X %d = %d \n", n, i, n*i);
    }

    // no loop just summition

    int m = 0;

    for (; i <= 10; i = i + 1) {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}

#include<stdio.h> // 1 to 20. multiplication table without * (using +);

int main()
{
    int n, i, m = 0;

    for ( n = 1; n <= 20; n = n + 1){
        for(i = 1; i <= 10; i = i + 1) {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);
        }
        m = 0;
        printf("\n");
    }

    return 0;
}


 // ends multiplication table

#include<stdio.h> /// continue statement

int main()
{
    int n = 0;

    while(n < 10) {
        n = n + 1;

        if (n % 2 == 0) {
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
#include<stdio.h> /// break statement

int main()
{
    int n = 1;

    while(n <= 100) {
        printf("%d\n",n);
        n++;

        if(n > 10) {
            break;
        }
    }

    return 0;
}

*/
