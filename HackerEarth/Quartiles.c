#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main()
{
    int n;
    scanf("%d", &n);

    int X[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (X[i + 1] < X[i])                //check adjacent elements
                swap(&X[i + 1], &X[i]);
        }
    }

    int Q1, Q2, Q3;
    int x ;

    if (n % 2 == 0)
    {
        x = n / 2;  //10   x = 5       0 |1 2| 3 |4| |5| 6 |7 8| 9
        Q2 = (X[x] + X[x-1])/2;
        if (x % 2 == 0)
        {
            Q1 = X[(x/2)- 1];
            Q3 = X[x + (x/2)];
        }
        else
        {
            Q1 = (X[x/2] + X[(x/2) - 1]) / 2;
            Q3 = (X[x + (x/2)]+ X[x + x/2 +1]) / 2;
        }
    }

    else
    {
        x = n / 2;          
        Q2 = X[x];
        if (x % 2 == 0)
        {
            Q1 = (X[x/2] + X[x/2 - 1]) / 2;
            Q3 = (X[x+ (x/2)] + X[x + x/2 + 1]) / 2;
        }
        else
        {
            Q1 = X[x/2];
            Q3 = X[x + (x/2)];
        }
    }

    printf("%d\n", Q1);
    printf("%d\n", Q2);
    printf("%d", Q3);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3 7 8 5 12 14 21 15 18 14


// 4 17 7 14 18 12 3 16 10 4 4 12

// 4
// 11
// 15

