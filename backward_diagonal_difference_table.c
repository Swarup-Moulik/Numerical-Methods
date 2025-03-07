#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of arguments :-");
    scanf("%d",&n);
    int x[n*2], y[n*2][n];
    printf("X\tY\n");
    for(i = 1; i<n*2; i++)
    {
        x[i] = -99999;
    }
    for(i = 1; i<n*2; i++)
    {
        for(j = 1; j<=n; j++)
        {
            y[i][j] = -99999;
        }
    }
    for(i = 1; i<n*2; i= i + 2)
    {
        scanf("%d%d", &x[i], &y[i][1]);
    }
    for(j = 2; j<=n; j++)
    {
        for(i = n*2-j ; i>=j; i=i-2)
        {
            y[i][j] = y[i+1][j-1] - y[i-1][j-1];
        }
    }
    printf("\n***Backward diagonal difference table***\n");
    for(i = 1; i<n*2; i++)
    {
        if(x[i] == -99999)
        {
                printf(" \t");
        }
        else
        {
                printf("%d\t", x[i]);
        }
        for(j = 1; j <= n; j++)
        {
            if(y[i][j] == -99999)
            {
                printf(" \t");
            }
            else
            {
                printf("%d\t", y[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

