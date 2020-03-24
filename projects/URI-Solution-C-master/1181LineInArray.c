#include <stdio.h>

int main(void)
{
    int n, i, j;
    double sum=0, avg, M[12][12];
    char c;

    scanf("%d %c", &n, &c);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for(i=0; i<12; i++)
    {
        sum+= M[n][i];
    }

    if(c=='S' || c=='s')
    {
        printf("%.1lf\n", sum);
    }
    if(c=='M' || c=='m')
    {
        avg = sum/12.0;
        printf("%.1lf\n", avg);
    }

}
