#include<stdio.h> // 1,2,3 permutation(two);

int main()
{
    int a, b, c;

    for(a = 1; a <= 3; a++){
        for(b = 1; b <= 3; b++){
            for(c = 1; c <= 3; c++){
                if(b != a && c != a && c != b){
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
/*#include<stdio.h> // 1,2,3 permutation(one); <it's perfect--run time kom>

int main()
{
    int a, b, c;

    for(a = 1; a <= 3; a++) {
        for(b = 1; b <= 3; b++){
            if(b != a){
                for(c = 1; c <= 3; c++){
                    if(c != b && c != a){
                        printf("%d, %d, %d\n", a, b, c);
                    }
                }
            }
        }
    }

    return 0;
}

#include<stdio.h> // Tenth Example

int main()
{
    int n, m, i, j;

    scanf("%d",&n);

    for(i = 1; i <= n; i = i + 1){
        scanf("%d",&m);

        for(j = 10; j <= m; j = j + 1) {
            if(j % 11 == 0) {
                continue;
            }
            printf("%d\n",j);
        }
    }

    return 0;
}

#include<stdio.h>// 1 to 20 namta(nested loop);

int main()
{
    int n, i;

    for(n = 1; n <= 20; n = n + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", n, i, n*i);
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>//Eight Example

int main()
{
    int m, n = 5;
    int i;

    m = 0;

    for(i = 1; i <= 10; i = i + 1) {
        m = m + n;
        printf("%d x %d = %d\n", n, i, m);
    }

    return 0;
}


#include<stdio.h>//Seven Example

int main()
{
    int n = 5;
    int i = 1;

    for( ; ;) {
        if(i > 10) {
            break;
        }

        printf("%d x %d = %d\n", n, i, n*i);
        i = i + 1;
    }

    return 0;
}

#include<stdio.h>//Six Example

int main()
{
    int n = 5;
    int i;

    for(i = 1; i <= 10; i = i + 1) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}


#include<stdio.h> //Fifth Example

int main()
{
    int n = 5;
    int i = 1;

    while(i <= 10) {
        printf("%d x %d = %d\n", n, i, n*i);
        i = i + 1;
    }

    return 0;
}


#include<stdio.h> // Forth Example

int main()
{
    int  n = 0;

    while(n < 10) {
        n = n + 1;

        if(n % 2 == 0){
            continue;
        }
        printf("%d\n",n);
    }

    return 0;
}

#include<stdio.h>//Third Example

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

#include<stdio.h>//Second Example

int main()
{
    int n = 1;

    while(n <=10) {
        printf("%d\n",n);
    }
    n++;

    return 0;
}

#include<stdio.h> //First Example

int main()
{
    int n = 1;

    while(n <= 10) {
        printf("%d\n",n);
        n++;
    }

    return 0;
}*/
