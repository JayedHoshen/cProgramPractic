#include <stdio.h>

int main(void)
{
    int i, j, count=0;
    double sum=0, avg, M[12][12];
    char c;

    scanf("%c", &c);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for(i=0; i<12-1; i++)
    {
        for(j=0; j<12-(i+1); j++)
        {
            sum+=M[i][j];
            count++;
        }
    }

    if(c=='S' || c=='s')
    {
        printf("%.1lf\n", sum);
    }
    if(c=='M' || c=='m')
    {
        avg = sum/count;
        printf("%.1lf\n", avg);
    }

}
